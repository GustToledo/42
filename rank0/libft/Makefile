# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 15:41:53 by guhenriq          #+#    #+#              #
#    Updated: 2025/05/08 15:41:53 by guhenriq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror
DEPS = includes
OBJDIR = obj

SRCS = \
	ft_atoi.c ft_memset.c ft_strlcpy.c \
	ft_bzero.c ft_putchar_fd.c ft_strlen.c \
	ft_calloc.c ft_putendl_fd.c ft_strmapi.c \
	ft_isalnum.c ft_putnbr_fd.c ft_strncmp.c \
	ft_isalpha.c ft_putstr_fd.c ft_strnstr.c \
	ft_isascii.c ft_split.c ft_strrchr.c \
	ft_isdigit.c ft_strchr.c ft_strtrim.c \
	ft_isprint.c ft_memchr.c ft_strdup.c ft_substr.c \
	ft_itoa.c ft_memcmp.c ft_striteri.c ft_tolower.c \
	ft_memcpy.c ft_strjoin.c ft_toupper.c \
	ft_memmove.c ft_strlcat.c

OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

NAME = libft.a

all: $(NAME)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I $(DEPS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re