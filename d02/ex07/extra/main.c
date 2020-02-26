#include <stdlib.h>
#include "ft_putchar.c"
#include "ft_print_combn.c"

int main(int ac, char *av[])
{
	if (ac > 1)
	{
		ft_print_combn(atoi(av[1]));
		ft_putchar('\n');
	}
    return (0);
}
