#include <stdio.h>
#include "ft_strcpy.c"

int     main()
{
    char    *src = "Beware of overflows! I'm not controlling myself...";
    char    dest[200] = {0};
    
    printf("dest is now: \"%s\"\n", ft_strcpy(dest, src));
    return (0);
}
