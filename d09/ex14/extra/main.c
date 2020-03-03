#include <stdio.h>
#include "ft_perso.h"
#include "ft_decrypt.c"

static void		ft_print_tab(t_perso **tab)
{
	int		idx;

	idx = 0;
	while (tab[idx])
	{
		printf("name: %s\n", tab[idx]->name);
		printf("age: %d\n", tab[idx]->age);
		printf((tab[idx + 1]) ? "\n" : "");
		idx++;
	}
}

int				main(int ac, char **av)
{
	t_perso		**tab;

	if (ac > 1)
	{
		tab = ft_decrypt(av[1]);
		ft_print_tab(tab);
	}
	return (0);
}
