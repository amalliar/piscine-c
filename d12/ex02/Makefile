# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalliar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/09 23:55:29 by amalliar          #+#    #+#              #
#    Updated: 2020/03/14 15:20:43 by amalliar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

INCLUDE = includes

SRC = srcs/*.c

FLAGS_DEV = -Wall -Wextra -Werror

FLAGS_PROD = -march=native -O2 -pipe

REDIR = 2>/dev/null

all: $(NAME)

$(NAME):
	@/usr/bin/gcc $(FLAGS_PROD) -c -I$(INCLUDE) $(SRC) $(REDIR)
	@/usr/bin/gcc -o $(NAME) *.o

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
