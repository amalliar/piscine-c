#include <stdio.h>
#include "ft_split_whitespaces.c"

int		main()
{
	char **words;

	words = ft_split_whitespaces("one two\tthree\nfour");
	while (*words) {
		printf("%s\n", *words);
		words++;
	}
	return (0);
}
