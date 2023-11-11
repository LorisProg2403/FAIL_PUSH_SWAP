/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:04 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/11 03:30:26 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>

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
}						t_stack_node;


#endif