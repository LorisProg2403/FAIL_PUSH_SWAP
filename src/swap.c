/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:56 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/11 03:05:31 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * 	sa : swap the first two nodes in A --> [1][2][3][4] becomes [2][1][3][4]
 * 		 do nothing if ther is only one or no elements
 * 
 * 	sb : swap the first two nodes in B --> [5][6][7] becomes [6][5][7]
 * 		 do nothing if ther is only one or no elements
 * 
 * 	ss : swap the first two nodes of both A and B --> [1][2][3][4] and [5][6][7] becomes [2][1][3][4] and [6][5][7]
*/