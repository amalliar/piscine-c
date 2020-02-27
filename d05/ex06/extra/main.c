#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int     main()
{
    printf("comparing 'str1' with 'str2' using ft_strcmp(): %d\n", ft_strcmp("str1", "str2"));
    printf("comparing 'str1' with 'str2' using strcmp(): %d\n\n", strcmp("str1", "str2"));
    printf("comparing 'something' with 'some' using ft_strcmp(): %d\n", ft_strcmp("something", "some"));
    printf("comparing 'something' with 'some' using strcmp(): %d\n\n", strcmp("something", "some"));
    printf("comparing 'something' with '' using ft_strcmp(): %d\n", ft_strcmp("something", ""));
    printf("comparing 'something' with '' using strcmp(): %d\n\n", strcmp("something", ""));
    printf("comparing '' with '' using ft_strcmp(): %d\n", ft_strcmp("", ""));
    printf("comparing '' with '' using strcmp(): %d\n\n", strcmp("", ""));
    printf("comparing 'identical' with 'identical' using ft_strcmp(): %d\n", ft_strcmp("identical", "identical"));
    printf("comparing 'identical' with 'identical' using strcmp(): %d\n", strcmp("identical", "identical"));
    return (0);
}
