/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:41:45 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/11 05:39:38 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"


/**
 * 	pa : Push the top node of B on top of A --> [1][2][3][4] [5][6][7] becomes [5][1][2][3][4] [6][7]
 * 		 Do nothing if B is empty
 * 
 * 	pb : Push the top node of A on top of B --> [1][2][3][4] [5][6][7] becomes [2][3][4] [1][5][6][7]
 *  	 Do nothing if A is empty
*/