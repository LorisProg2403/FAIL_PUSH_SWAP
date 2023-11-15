/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:40:04 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/15 15:26:51 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack_node	*find_bottom_node(t_stack_node *s)
{
	if (!s)
		return (NULL);
	while (s->next)
		s = s->next;
	return (s);
}

bool	stack_sorted(t_stack_node *s)
{
	if (!s)
		return (1);
	while (s->next)
	{
		if (s->value > s->next->value)
			return (false);
		s = s->next;
	}
	return (true);
}

int	stack_len(t_stack_node *s)
{
	int	len;
	
	if (!s)
		return (0);
	len = 0;
	while (s)
	{
		s = s->next;
		len++;
	}
	return (len);
}

t_stack_node	*find_max(t_stack_node *s)
{
	long			max;
	t_stack_node	*max_node;
	
	if (!s)
		return (NULL);
	max = LONG_MIN;
	while (s)
	{
		if (s->value > max)
		{
			max = s->value;
			max_node = s;
		}
		s = s->next;
	}
	return (max_node);
	
}

t_stack_node	*find_min(t_stack_node *s)
{
	long			min;
	t_stack_node	*min_node;
	
	if (!s)
		return (NULL);
	min = LONG_MAX;
	while (s)
	{
		if (s->value < min)
		{
			min = s->value;
			min_node = s;
		}
		s = s->next;
	}
	return (min_node);
}
