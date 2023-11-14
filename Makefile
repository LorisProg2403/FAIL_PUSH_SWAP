# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgaume <lgaume@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 02:41:59 by lgaume            #+#    #+#              #
#    Updated: 2023/11/14 22:03:15 by lgaume           ###   ########.fr        #
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

UTILS_DIR			=	$(SRC_DIR)utils/stack_utils.c \
						$(SRC_DIR)utils/stack_utils2.c \
						$(SRC_DIR)utils/split.c \
						$(SRC_DIR)utils/frees.c

ALGORITHMS_DIR		=	$(SRC_DIR)algorithms/sort_three.c \
						$(SRC_DIR)algorithms/sort_stacks.c

ERRORS_DIR			=	$(SRC_DIR)errors/handle_errors.c 

STACKS_DIR			=	$(SRC_DIR)stacks/stack_init.c \
						$(SRC_DIR)stacks/init_a_to_b.c \
						$(SRC_DIR)stacks/init_b_to_a.c 

SRC_DIR				=	$(SRC_DIR)main.c

SRCS 				= $(OPERATIONS_DIR) $(UTILS_DIR) $(ALGORITHMS_DIR) $(ERRORS_DIR) $(STACKS_DIR)	$(SRCS_DIR)

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