#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "ft_compact.c"

void	print_tab(char **tab, int length)
{
	printf(">>> tab length: %d\n", length);
	for (int i = 0; i < length; i++)
	{
		if (tab[i])
			printf("tab[%d]: %s\n", i, tab[i]);
		else
			printf("tab[%d]: NULL\n", i);
	}
	printf("\n");
}

int		main(void)
{
	char	**tab;

	tab = (char **)malloc(8 * sizeof(char *));
	for (int i = 0; i < 8; i++)
		tab[i] = NULL;
	asprintf(tab, "first");
	asprintf(tab + 3, "second");
	asprintf(tab + 5, "third");
	printf("\n");
	print_tab(tab, 8);
	print_tab(tab, ft_compact(tab, 8));
	return (0);

}
