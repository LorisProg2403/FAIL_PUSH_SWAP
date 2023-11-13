/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 06:23:55 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/13 17:54:56 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	append_node(t_stack_node **s, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;
	
	if (!s)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->value = n;
	if (!(*s))
	{
		*s = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_bottom_node(*s);
		last_node->next = node;
		node->prev = last_node;	
	}
}

void	init_stack_a(t_stack_node **a, char **av)
{
	long	n;
	int		i;

	i = 0;
	while (av[i])
	{
		if (error_synthax(av[i]))
			free_errors(a);
		n = ft_atoi(av[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		if (error_duplicate(*a, (int)n));
			free_errors(a);
		append_node(a, (int)n);
		i++;
	}
}