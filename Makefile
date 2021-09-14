# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/13 20:02:31 by ddecourt          #+#    #+#              #
#    Updated: 2021/09/14 16:02:38 by ddecourt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	push_swap.c \
	srcs/check.c \
	srcs/stack_func.c \
	srcs/stack_func2.c \
	srcs/instruction_set.c \
	srcs/instruction_set2.c \
	srcs/instruction_set3.c \
	srcs/selection_sort.c \
	srcs/get_mediane.c \
	srcs/optimize_algorithm.c\
	srcs/algorithm_utils.c\

OBJS = ${SRCS:.c=.o}

NAME = push_swap

HEADER = inc/push_swap.h

CC = clang -g3

CFLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o:
	${CC} -c ${CFLAGS} -o $@ $< 

$(NAME):    ${OBJS}
		make -C libft
		${CC} ${CFLAGS} ${OBJS} -L./libft -lft -o ${NAME}

all:	${NAME}

clean: 
	make clean -C libft
	${RM} ${OBJS}

fclean: clean
		make fclean -C libft	
		${RM} ${NAME}

re:	 fclean all

.PHONY: all clean fclean re
