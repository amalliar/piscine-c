#include <stdio.h>
#include <limits.h>
#include "ft_is_prime.c"

int		main()
{
	printf("First 10000 prime numbers:");
	int k = 0;
	for (int i = 0; k < 10000; i++)
		if (ft_is_prime(i))
			printf("\n%8d %8d", ++k, i);
	printf("\n");
	return (0);
}
