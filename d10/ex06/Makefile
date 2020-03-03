# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalliar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/09 23:55:29 by amalliar          #+#    #+#              #
#    Updated: 2020/02/11 09:46:10 by amalliar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

INCLUDE = includes

SRC = srcs/*.c

all: $(NAME)

$(NAME):
	@/usr/bin/gcc -o $(NAME) -I$(INCLUDE) $(SRC) > /dev/null

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
