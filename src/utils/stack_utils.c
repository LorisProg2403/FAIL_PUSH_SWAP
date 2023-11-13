/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:40:04 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/13 13:06:50 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack_node	*find_bottom_node(t_stack_node *s)
{
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
	t_stack_node	*max;

	if (!s)
		return (NULL);
	max = s;
	while (s)
	{
		if (max->value < s->value)
			max = s;
		s = s->next;
	}
	return (max);
}