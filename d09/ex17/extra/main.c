#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>
#include "ft_max.c"

int		main(void)
{
	int		*tab;

	tab = (int *)malloc(10 * sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 101;
		tab[i] *= (i % 2) ? -1 : 1;
		printf("tab[%d]: %d\n", i, tab[i]);
	}
	printf("\n>>> MAX: %d\n", ft_max(tab, 10));
	return (0);
}
