/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:04 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/13 06:12:55 by lgaume           ###   ########.fr       */
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
	int						value;
	int						position;
	int						push_cost;
	bool					cheapest;
	bool					above_median;
	struct s_stack_node		*next;
	struct s_stack_node		*prev;
	struct s_stack_node		*target;
}	t_stack_node;

//**Handle errors**

//**Stack initialisation**

//**Nodes initialisation**

//**Utils**
char			**split(char *s, char c);
//t_stack_node	*find_top_node(t_stack_node *stack);

//**Operations**
void			pa(t_stack_node **a, t_stack_node **b, bool print);
void			pb(t_stack_node **a, t_stack_node **b, bool print);
void			sa(t_stack_node **A, bool print);
void			sb(t_stack_node **B, bool print);
void			ss(t_stack_node **A, t_stack_node **B, bool print);
//**Algorithms**

#endif // PUSH_SWAP_H