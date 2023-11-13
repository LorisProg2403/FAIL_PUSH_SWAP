/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:15:43 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/13 19:21:27 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack_node	*get_cheapest(t_stack_node *s)
{
	if (!s)
		return (NULL);
	while (s)
	{
		if (s->cheapest)
			return (s);
		s = s->next;
	}
	return (NULL);
}

void	prep_for_push(t_stack_node **s, t_stack_node *top, char name)
{
	while (*s != top)
	{
		if (name == 'a')
		{
			if (top->above_median)
				ra(s, false);
			else
				rra(s, false);
		}
		else if (name == 'b')
		{
			if (top->above_median)
				rb(s, false);
			else
				rrb(s, false);
		}
	}
}
