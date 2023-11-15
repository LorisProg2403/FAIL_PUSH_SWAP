/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:04 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/15 21:46:12 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/inc/libft.h"
# include "../libft/inc/ft_printf.h"

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
void			free_errors(t_stack_node **s); //ok
void			free_stack(t_stack_node **s); //ok
int				error_synthax(char *str); //ok
int				error_duplicate(t_stack_node *s, int n); //ok

//**Stack initialisation**
void			init_stack_a(t_stack_node **a, char **av); //ok
char			**split(char *s, char c); //ok

//**Nodes initialisation**
void			init_nodes_a(t_stack_node *a, t_stack_node *b); //ok
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			current_position(t_stack_node *s); //ok
void			set_cheapest(t_stack_node *s); //ok
t_stack_node	*get_cheapest(t_stack_node *s); //ok
void			prep_for_push(t_stack_node **s, t_stack_node *top, char name); //ok

//**Utils**
t_stack_node	*find_bottom_node(t_stack_node *s); //ok
bool			stack_sorted(t_stack_node *s); //ok
int				stack_len(t_stack_node *s); //ok
t_stack_node	*find_max(t_stack_node *s); //ok
t_stack_node	*find_min(t_stack_node *s); //ok

//**Operations**
void			pa(t_stack_node **a, t_stack_node **b, bool print); //ok
void			pb(t_stack_node **a, t_stack_node **b, bool print); //ok
void			sa(t_stack_node **a, bool print); //ok
void			sb(t_stack_node **b, bool print); //ok
void			ss(t_stack_node **a, t_stack_node **b, bool print); //ok
void			ra(t_stack_node **a, bool print); //ok
void			rb(t_stack_node **b, bool print); //ok
void			rr(t_stack_node **a, t_stack_node **b, bool print); //ok
void			rra(t_stack_node **a, bool print); //ok
void			rrb(t_stack_node **b, bool print); //ok
void			rrr(t_stack_node **a, t_stack_node **b, bool print); //ok

//**Algorithms**
void			sort_three(t_stack_node **s); //ok
void			sort_stacks(t_stack_node **a, t_stack_node **b); //ok

#endif // PUSH_SWAP_H