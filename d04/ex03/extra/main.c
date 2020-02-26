#include <stdio.h>
#include "ft_recursive_power.c"

int     main()
{
    for (int i = -10; i <= 10; i++)
        printf("ft_recursive_power(2, %d) == %d\n", i, ft_recursive_power(2, i));
    printf("ft_recursive_power(0, 0) == %d\n", ft_recursive_power(0, 0));
    return (0);
}
