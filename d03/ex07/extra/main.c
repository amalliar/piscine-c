#define _GNU_SOURCE
#include <stdio.h>
#include "ft_strrev.c"

int main()
{
    char    *str;

    asprintf(&str, "The quick brown fox jumps over the lazy dog");
    printf("%s", str);
    printf("\n%s", ft_strrev(str));
    printf("\n");
    return (0);
}
