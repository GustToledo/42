# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 17:57:37 by guhenriq          #+#    #+#              #
#    Updated: 2025/11/25 17:57:38 by guhenriq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT_DIR = libft
LIBFT = ${LIBFT_DIR}/libft.a

SRC = src/push_swap.c src/check_input.c src/utils.c src/create_stack.c \
		src/basic_moves.c src/rotate_moves.c src/complex_moves.c \
		src/complex_moves_prep.c src/complex_moves_do.c
OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
INCLUDE = -I include

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS} ${LIBFT}
	${CC} ${CFLAGS} ${INCLUDE} ${OBJS} ${LIBFT} -o ${NAME}

${LIBFT}:
		${MAKE} -C ${LIBFT_DIR}

all:	${NAME}

clean:
	${MAKE} -C ${LIBFT_DIR} clean
	${RM} ${OBJS}

fclean: clean
	${MAKE} -C ${LIBFT_DIR} fclean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re