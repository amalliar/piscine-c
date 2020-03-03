#include <stdlib.h>
#include <stdio.h>
#include "ft_collatz_conjecture.c"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("Flight time: %u\n", ft_collatz_conjecture(atoi(av[1])));
	}
	return (0);
}
