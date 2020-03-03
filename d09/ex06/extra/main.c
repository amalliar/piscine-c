#define _GNU_SOURCE
#include <stdio.h>
#include <stddef.h>
#include "ft_ultimator.h"
#include "ft_destroy.c"

int		main(void)
{
	char	***factory;

	factory = (char ***)malloc(4 * sizeof(char **));
	factory[3] = NULL;
	for (int i = 0; i < 3; i++)
	{
		factory[i] = (char **)malloc(4 * sizeof(char *));
		factory[i][3] = NULL;
		for (int j = 0; j < 3; j++)
			asprintf(factory[i] + j, "Methamphetamine");
	}
	ft_destroy(factory);
	return (0);
}
