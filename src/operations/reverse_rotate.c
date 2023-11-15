/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:49 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/15 19:07:07 by lgaume           ###   ########.fr       */
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

	if (!*s || !(*s)->next)
		return ;
	last = find_bottom_node(*s);
	last->prev->next = NULL;
	last->next = *s;
	last->prev = NULL;
	*s = last;
	last->next->prev = last; //changin the old *s prev
}

void	rra(t_stack_node **a, bool print)
{
	r_rotate(a);
	if (!print)
		ft_printf("rra\n");
}

void	rrb(t_stack_node **b, bool print)
{
	r_rotate(b);
	if (!print)
		ft_printf("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b, bool print)
{
	r_rotate(a);
	r_rotate(b);
	if (!print)
		ft_printf("rrr\n");
}
