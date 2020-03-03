#include <stdlib.h>
#include <stdio.h>
#include "ft_active_bits.c"

int		main(int ac, char **av)
{
	if (ac > 1)
		printf("%s has %d active bits.\n", av[1], ft_active_bits(atoi(av[1])));
	return (0);
}
