/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:56 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/15 19:12:05 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * 	sa : swap the first two nodes in A --> [1][2][3][4] becomes [2][1][3][4]
 * 		 do nothing if ther is only one or no elements
 * 
 * 	sb : swap the first two nodes in B --> [5][6][7] becomes [6][5][7]
 * 		 do nothing if ther is only one or no elements
 * 
 * 	ss : swap the first two nodes of both A and B --> [1][2][3][4] and [5][6][7] becomes [2][1][3][4] and [6][5][7]
*/

static void	swap(t_stack_node **s)
{
	if (!*s || !(*s)->next)
		return ;
	*s = (*s)->next;
	(*s)->prev->prev = *s;
	(*s)->prev->next = (*s)->next;
	if ((*s)->next)
		(*s)->next->prev = (*s)->prev;
	(*s)->next = (*s)->prev;
	(*s)->prev = NULL;
}

void	sa(t_stack_node **a, bool print)
{
	swap(a);
	if (!print)
		ft_printf("sa\n");
}

void	sb(t_stack_node **b, bool print)
{
	swap(b);
	if (!print)
		ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		ft_printf("ss\n");
}