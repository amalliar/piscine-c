#include <stdio.h>
#include <ctype.h>
#include "ft_strupcase.c"

int     main()
{
    char    buffer[64] = {0};

    sprintf(buffer, "lower case");
    printf("converting \"lower case\": \"%s\"\n", ft_strupcase(buffer));
    sprintf(buffer, "UPPER CASE");
    printf("converting \"UPPER CASE\": \"%s\"\n",  ft_strupcase(buffer));
    sprintf(buffer, "3.14lot");
    printf("converting \"3.14lot\": \"%s\"\n", ft_strupcase(buffer));
    return (0);
}
