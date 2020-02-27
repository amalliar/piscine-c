#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "ft_strdup.c"

int		main()
{
	char	*first = "I am unique and unreproducible!";
	char	*second = ft_strdup(first);

	assert(!strcmp(first, second));
	return (0);
}
