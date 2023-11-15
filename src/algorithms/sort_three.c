/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 03:24:49 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/15 21:42:00 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/**
 * 	Make sure that the maximum number is a the bottom
 * 	If needed, do sa()
*/

void	sort_three(t_stack_node **s)
{
	t_stack_node	*biggest;

	biggest = find_max(*s);
	if (biggest == *s)
		ra(s, false);
	else if ((*s)->next == biggest)
		rra(s, false);
	if ((*s)->value > (*s)->next->value)
		sa(s, false);
}