#include <stdio.h>
#include <ctype.h>
#include "ft_strlowcase.c"

int     main()
{
    char    buffer[64] = {0};

    sprintf(buffer, "lower case");
    printf("converting \"lower case\": \"%s\"\n", ft_strlowcase(buffer));
    sprintf(buffer, "UPPER CASE");
    printf("converting \"UPPER CASE\": \"%s\"\n",  ft_strlowcase(buffer));
    sprintf(buffer, "3.14LOT");
    printf("converting \"3.14LOT\": \"%s\"\n", ft_strlowcase(buffer));
    return (0);
}
