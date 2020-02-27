#include <string.h>
#include <stdio.h>
#include "ft_strcat.c"

int     main()
{
    char str[80];
    strcpy(str, "these ");
    ft_strcat(str, "strings ");
    ft_strcat(str, "are ");
    ft_strcat(str, "concatenated.");
    puts(str);
    return (0);
}
