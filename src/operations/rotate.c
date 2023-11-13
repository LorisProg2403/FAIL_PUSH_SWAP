/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:52 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/13 06:32:25 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * 	ra : Put the top node of A at the bottom --> [1][2][3][4] becomes [2][3][4][1]
 * 
 * 	rb : Put the top node of B at the bottom --> [5][6][7] becomes [6][7][5]
 * 
 * 	rr : Put the top node of A and B at their bottom --> [1][2][3][4] and [5][6][7] becomes [2][3][4][1] and [6][7][5]
*/

static void	rotate(t_stack_node **s)
{
	t_stack_node	*last;

	if (!*s || !(*s)->next)
		return ;
	last = find_bottom_node(*s);
	last->next = *s;
	*s = (*s)->next;
	(*s)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

void	ra(t_stack_node **A, bool print)
{
	rotate(A);
	if (!print)
		ft_printf("ra\n");
}

void	rb(t_stack_node **B, bool print)
{
	rotate(B);
	if (!print)
		ft_printf("rb\n");
}

void	rr(t_stack_node **A, t_stack_node **B, bool print)
{
	rotate(A);
	rotate(B);
	if (!print)
		ft_printf("rr\n");
}