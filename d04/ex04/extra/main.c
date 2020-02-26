#include <stdio.h>
#include "ft_fibonacci.c"

int     main()
{
    for (int i = -4; i <= 16; i++)
        printf("ft_fibonacci(%d) == %d\n", i, ft_fibonacci(i));
    return (0);
}
