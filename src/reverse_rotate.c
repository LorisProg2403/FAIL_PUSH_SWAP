/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:49 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/11 03:00:09 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * 	rra : Put the bottom node to the top of A --> [1][2][3][4] becomes [4][1][2][3]
 * 
 * 	rrb : Put the bottom node to the top of B --> [5][6][7] becomes [7][5][6]
 * 
 * 	rrr : Put both the bottom node of A and B to the top --> [1][2][3][4] and [5][6][7] becomes [4][1][2][3] and [7][5][6]
*/