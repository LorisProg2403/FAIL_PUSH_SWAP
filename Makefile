# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 02:41:59 by lgaume            #+#    #+#              #
#    Updated: 2023/11/11 02:43:09 by lgaume           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PUSH_SWAP

all : $(NAME)

clean :		
			rm -f $(OBJS)

fclean :	clean
			rm -f $(NAME)

re :		fclean all

.PHONY :	all re clean fclean