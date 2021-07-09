# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/13 20:02:31 by ddecourt          #+#    #+#              #
#    Updated: 2021/07/02 16:06:31 by ddecourt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft_cmd:
	make -C libft 


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

OBJS = ${SRCS:.c=.o}

NAME = push_swap

HEADER = inc/push_swap.h

CC = clang

CFLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o:
	${CC} -c ${CFLAGS} -o $@ $< 

$(NAME):    ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -L./libft -lft -o ${NAME}

all:	${NAME}

clean: 
	${RM} ${OBJS}

