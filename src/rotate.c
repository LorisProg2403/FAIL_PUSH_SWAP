/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:52 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/11 02:56:19 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * 	ra : Put the top node of A at the bottom --> [1][2][3][4] becomes [2][3][4][1]
 * 
 * 	rb : Put the top node of B at the bottom --> [5][6][7] becomes [6][7][5]
 * 
 * 	rr : Put the top node of A and B at their bottom --> [1][2][3][4] and [5][6][7] becomes [2][3][4][1] and [6][7][5]
*/