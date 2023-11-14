/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:48:38 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/14 22:22:02 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	set_target_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*current_b;
	t_stack_node	*target;
	long			best_match_index;

	while (a)
	{
		best_match_index = LONG_MIN; //might need to use a LONG
		current_b = b;
		while (current_b)
		{
			if (current_b->value < a->value && current_b->value > best_match_index)
			{
				best_match_index = current_b->value;
				target = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == LONG_MIN)
			a->target = find_max(b);
		else
			a->target = target;
		a = a->next;
	}
}

static void	cost_analysis_a(t_stack_node *a, t_stack_node *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->push_cost = a->position;
		if (!(a->above_median))
			a->push_cost = len_a - (a->position);
		if (a->target->above_median)
			a->push_cost += a->target->position;
		else
			a->push_cost += len_b - (a->target->position);
		a = a->next;
	}
}

void	current_position(t_stack_node *s)
{
	int	i;
	int	median;
	
	i = 0;
	if (!s)
		return;
	median = stack_len(s) / 2;
	while (s)
	{
		s->position = i;
		if (i <= median)
			s->above_median = true;
		else
			s->above_median = false;
		s = s->next;
		i++;
	}
}

void	set_cheapest(t_stack_node *s)
{
	int				cheapest_value;
	t_stack_node	*cheapest_node;
	
	if (!s)
		return ;
	cheapest_value = INT_MAX;
	while (s)
	{
		if (s->push_cost < cheapest_value)
		{
			cheapest_value = s->push_cost;
			cheapest_node = s;
		}
		s = s->next;
	}
	cheapest_node->cheapest = true;
}

void	init_nodes_a(t_stack_node *a, t_stack_node *b)
{
	current_position(a); //set positon and above_median
	current_position(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheapest(a);
}