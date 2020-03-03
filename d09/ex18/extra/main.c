#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include "ft_join.c"

int		main(void)
{
	short	i;
	char	**tab;
	char	*sep = " || ";

	tab = (char **)malloc(17 * sizeof(char *));
	i = 0;
	while (i < 16)
	{
		asprintf(tab + i, "word #%d", i);
		i++;
	}
	tab[16] = NULL;
	printf("%s", ft_join(tab, sep));
	return (0);
}
