# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/13 18:29:06 by guhenriq          #+#    #+#              #
#    Updated: 2025/11/13 20:33:00 by guhenriq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      := cc
CFLAGS  := -Wall -Wextra -Werror -g

SERVER  := server
CLIENT  := client

SRCS_S  := server.c
SRCS_C  := client.c
OBJS_S  := $(SRCS_S:.c=.o)
OBJS_C  := $(SRCS_C:.c=.o)

LIBFT_DIR := ./libft
LIBFT     := $(LIBFT_DIR)/libft.a
INCLUDE   := -I./includes

.PHONY: all clean fclean re

all: $(LIBFT) $(SERVER) $(CLIENT)

$(SERVER): $(OBJS_S) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_S) $(LIBFT) -o $@

$(CLIENT): $(OBJS_C) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_C) $(LIBFT) -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJS_S) $(OBJS_C)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(SERVER) $(CLIENT)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all