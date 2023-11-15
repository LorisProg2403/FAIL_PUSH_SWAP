/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:45 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/15 15:03:38 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"


/**
 * 	pa : Push the top node of B on top of A --> [1][2][3][4] [5][6][7] becomes [5][1][2][3][4] [6][7]
 * 		 Do nothing if B is empty
 * 
 * 	pb : Push the top node of A on top of B --> [1][2][3][4] [5][6][7] becomes [2][3][4] [1][5][6][7]
 *  	 Do nothing if A is empty
*/

static void	push(t_stack_node **dst, t_stack_node **src)
{
	t_stack_node	*push_node;
	
	if (!src)
		return ;
	push_node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	push_node->prev = NULL;
	if (!*dst)
	{
		*dst = push_node;
		push_node ->next = NULL;
	}
	else
	{
		push_node->next = *dst;
		push_node->next->prev = push_node;
		*dst = push_node;
	}
}

void	pa(t_stack_node **A, t_stack_node **B, bool print)
{
	push(A, B);
	if (!print)
		ft_printf("pa\n");
}

void	pb(t_stack_node **A, t_stack_node **B, bool print)
{
	push(B, A);
	if (!print)
		ft_printf("pb\n");
}
