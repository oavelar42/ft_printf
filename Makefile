# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 16:18:02 by oavelar           #+#    #+#              #
#    Updated: 2021/03/28 14:05:40 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS =	ft_printf.c \
		ft_print_put.c \
		ft_check.c \
		ft_setters.c \
		ft_flags.c \
		ft_utils.c \
		ft_print_char.c \
		ft_print_int.c \
		ft_print_deci.c \
		ft_print_unsigned.c \
		ft_print_pointer.c

OBJS = ${SRCS:%.c=%.o}

FLAGS = -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
