#include <stdio.h>
#include "ft_abs.h"

int		main(void)
{
	int		nbr = -43;

	printf("ABS(-42) == %d\n", ABS(-42));
	printf("ABS(0) == %d\n", ABS(0));
	printf("ABS(42) == %d\n", ABS(42));
	printf("ABS(-42 + 21) == %d\n", ABS(-42 + 21));
	printf("nbr == %d\n", nbr);
	printf("ABS(nbr++) == %d\n", ABS(nbr++));
	printf("nbr == %d\n", nbr);
	return (0);
}
