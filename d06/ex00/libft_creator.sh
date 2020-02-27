#!/bin/sh

gcc -c ft_*.c
ar rc libft.a ft_*.o
ranlib libft.a
rm ft_*.o
