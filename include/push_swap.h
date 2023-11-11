/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:04 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/11 06:08:18 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/header/libft.h"
# include "../libft/header/ft_printf.h"

typedef struct s_stack_node
{
	struct s_stacks		*next;
	struct s_stacks		*prev;
	struct s_stacks		*target;
	int					value;
	int					position;
	int					push_cost;
	bool				cheapest;
	bool				above_median;
}	t_stack_node;

//Handle errors

//Stack initialisation

//Nodes initialisation

//Utils
char	**split(char *s, char c);
//Commands

//Algorithms

#endif