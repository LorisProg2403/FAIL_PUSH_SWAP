# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 02:41:59 by lgaume            #+#    #+#              #
#    Updated: 2023/11/11 06:02:05 by lgaume           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

# Compiler
CC = gcc 
FLAGS = -Wall -Wextra -Werror
RM = rm -f


# Directories
LIBFT				= ./libft/libftprintf.a
INC					= include/
SRC_DIR				= src/
OBJ_DIR				= obj/

# Source Files
OPERATIONS_DIR		=	$(SRC_DIR)operations/push.c \
						$(SRC_DIR)operations/reverse_rotate.c \
						$(SRC_DIR)operations/rotate.c \
						$(SRC_DIR)operations/swap.c

STACK_UTILS_DIR		=	$(SRC_DIR)stack_utils/stack_utils.c

ALGORITHMS_DIR		=	$(SRC_DIR)algorithms/sort_three.c

SRCS 				= $(OPERATIONS_DIR) $(STACK_UTILS_DIR) $(ALGORITHMS_DIR)

OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))


# Rules
$(LIBFT) :	
					@make -C ./libft	

all : 				$(NAME)

$(NAME) :			$(OBJ) $(LIBFT)
					@$(CC) $(FLAGS) -I $(INC) $(OBJ) $(LIBFT) -o $(NAME)

## Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re :				fclean all

.PHONY :			all re clean fclean