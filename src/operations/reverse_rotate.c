/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:49 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/13 06:40:08 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * 	rra : Put the bottom node to the top of A --> [1][2][3][4] becomes [4][1][2][3]
 * 
 * 	rrb : Put the bottom node to the top of B --> [5][6][7] becomes [7][5][6]
 * 
 * 	rrr : Put both the bottom node of A and B to the top --> [1][2][3][4] and [5][6][7] becomes [4][1][2][3] and [7][5][6]
*/

static void	r_rotate(t_stack_node **s)
{
	t_stack_node	*last;

	if (!*s || (*s)->next)
		return ;
	last = find_bottom_node(*s);
	last->prev->next = NULL;
	last->next = *s;
	last->prev = NULL;
	*s = last;
	last->next->prev = last; //changin the old *s prev
}

void	rra(t_stack_node **A, bool print)
{
	r_rotate(A);
	if (!print)
		ft_printf("rra\n");
}

void	rrb(t_stack_node **B, bool print)
{
	r_rotate(B);
	if (!print)
		ft_printf("rrb\n");
}

void	rrr(t_stack_node **A, t_stack_node **B, bool print)
{
	r_rotate(A);
	r_rotate(B);
	if (!print)
		ft_printf("rrr\n");
}
