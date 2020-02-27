#include <stdio.h>
#include <string.h>
#include "ft_strcapitalize.c"

int     main()
{
    char    buffer[128] = {0};

    sprintf(buffer, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
    printf("%s\n", buffer);
    printf("%s\n\n", ft_strcapitalize(buffer));
    sprintf(buffer, "\\wHA t THe f,Uck i_s\ttH!s __sting++?!!");
    printf("%s\n", buffer);
    printf("%s\n", ft_strcapitalize(buffer));
    return (0);
}
