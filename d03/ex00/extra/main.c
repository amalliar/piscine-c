#include <stdio.h>
#include "ft_ft.c"

int     main()
{
    int nbr = 21;

    printf("%d is now ", nbr);
    ft_ft(&nbr);
    printf("%d\n", nbr);
    return (0);
}
