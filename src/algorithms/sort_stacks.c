/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:47:02 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/14 22:07:46 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rotate_both(t_stack_node **a, t_stack_node **b, 
					t_stack_node *cheapest_node, bool is_rev)
{
	if (!is_rev)
	{
		while (*b != cheapest_node->target && *a != cheapest_node)
			rr(a, b, false);
		current_position(*a);
		current_position(*b);
	}
	else
	{
		while (*b != cheapest_node->target && *a != cheapest_node)
			rrr(a, b, false);
		current_position(*a);
		current_position(*b);
	}
}

static void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node *cheapest;
	
	cheapest = get_cheapest(*a);
	/*if (cheapest->above_median && cheapest->target->above_median)
		rotate_both(a, b, cheapest, false);
	else if (!(cheapest->above_median) && (!cheapest->target->above_median))
		rotate_both(a, b, cheapest, true);*/
	rotate_both(a, b, cheapest, !(cheapest->above_median && cheapest->target->above_median));
	prep_for_push(a, cheapest, 'a');
	prep_for_push(b, cheapest->target, 'b');
	pb(b, a, false);
}

static void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	prep_for_push(a, (*b)->target, 'a');
	pa(a, b, false);
}

static void	min_on_top(t_stack_node **a)
{
	while ((*a)->value != find_max(*a)->value)
	{
		if (find_min(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a--  > 3 && !stack_sorted(*a))
		pb(b, a, false);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	while (len_a-- > 3 && stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_position(*a);
	min_on_top(a);
}