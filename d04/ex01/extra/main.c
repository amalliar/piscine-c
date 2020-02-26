#include <stdio.h>
#include "ft_recursive_factorial.c"

int     main()
{
    for (int i = -4; i <= 16; i++)
        printf("ft_recursive_factorial(%d) == %d\n", i, ft_recursive_factorial(i));
    return (0);
}
