/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:04 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/14 08:42:09 by lgaume           ###   ########.fr       */
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
void			free_errors(t_stack_node **s);
void			free_stack(t_stack_node **s);
int				error_synthax(char *str);
int				error_duplicate(t_stack_node *s, int n);

//**Stack initialisation**
void			init_stack_a(t_stack_node **a, char **av);
//**Nodes initialisation**

//**Utils**
char			**split(char *s, char c);
t_stack_node	*find_bottom_node(t_stack_node *s);
bool			stack_sorted(t_stack_node *s);
int				stack_len(t_stack_node *s);
t_stack_node	*find_max(t_stack_node *s);
t_stack_node	*find_min(t_stack_node *s);
t_stack_node	*get_cheapest(t_stack_node *s);
void			prep_for_push(t_stack_node **s, t_stack_node *top, char name);

//**Operations**
void			pa(t_stack_node **a, t_stack_node **b, bool print);
void			pb(t_stack_node **a, t_stack_node **b, bool print);
void			sa(t_stack_node **A, bool print);
void			sb(t_stack_node **B, bool print);
void			ss(t_stack_node **A, t_stack_node **B, bool print);
void			ra(t_stack_node **A, bool print);
void			rb(t_stack_node **B, bool print);
void			rr(t_stack_node **A, t_stack_node **B, bool print);
void			rra(t_stack_node **A, bool print);
void			rrb(t_stack_node **B, bool print);
void			rrr(t_stack_node **A, t_stack_node **B, bool print);

//**Algorithms**
void			sort_three(t_stack_node **s);

#endif // PUSH_SWAP_H