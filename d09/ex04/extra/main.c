#define _GNU_SOURCE
#include <stdio.h>
#include "ft_rot42.c"

int		main(void)
{
	char	*cyphertext;

	asprintf(&cyphertext, "Grkd Nyoc Dro Pyh Cki?\n");
	printf("%s", ft_rot42(cyphertext));
	return (0);
}
