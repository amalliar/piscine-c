#include <stdio.h>
#include "ft_iterative_factorial.c"

int     main()
{
    for (int i = -4; i <= 16; i++)
        printf("ft_iterative_factorial(%d) == %d\n", i, ft_iterative_factorial(i));
    return (0);
}
