# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalliar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/09 23:55:29 by amalliar          #+#    #+#              #
#    Updated: 2020/02/11 05:13:41 by amalliar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDE = includes

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	srcs/ft_strlen.c srcs/ft_swap.c

all: $(NAME)

$(NAME):
	/usr/bin/gcc -I$(INCLUDE) -c $(SRC) > /dev/null
	/usr/bin/ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o \
		ft_strlen.o ft_swap.o
	/usr/bin/ranlib $(NAME)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o \
		ft_strlen.o ft_swap.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
