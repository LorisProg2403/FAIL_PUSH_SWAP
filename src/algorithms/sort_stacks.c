/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:47:02 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/14 21:34:07 by lgaume           ###   ########.fr       */
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
		current_index(*a);
		current_index(*b);
	}
	else
	{
		while (*b != cheapest_node->target && *a != cheapest_node)
			rrr(a, b, false);
		current_index(*a);
		current_index(*b);
	}
}

static void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{

}

static void	move_b_to_a(t_stack_node **a, t_stack_node *b)
{

}

static void	min_on_top(t_stack_node **a)
{

}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{

}