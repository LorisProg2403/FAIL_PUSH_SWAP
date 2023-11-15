/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:39:33 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/15 15:16:39 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	error_synthax(char *str)
{
	if (!(*str == '+' || *str =='-' || ft_isdigit(*str)))
		return (1);
	if ((*str == '+' || *str == '-') && !ft_isdigit(str[1]))
		return (1);
	while (*++str)
	{
		if (!ft_isdigit(*str))
			return (1);
	}
	return (0);
}

int	error_duplicate(t_stack_node *s, int n)
{
	if (!s)
		return (0);
	while (s)
	{
		if (s->value == n)
			return (1);
		s = s->next;
	}
	return (0);
}