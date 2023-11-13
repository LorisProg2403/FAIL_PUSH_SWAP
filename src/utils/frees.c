/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:23:45 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/13 19:27:27 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	free_stack(t_stack_node **s)
{
	t_stack_node	*tmp;
	t_stack_node	*current;
	
	if (!s)
		return ;
	current = *s;
	while (current)
	{
		tmp = current->next;
		current->value = 0;
		free(current);
		current = tmp;
	}
	*s = NULL;
}

void	free_errors(t_stack_node **s)
{
	free_stack(s);
	ft_printf("Error\n");
	exit(1);
}
