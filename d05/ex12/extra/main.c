#include <stdio.h>
#include "ft_str_is_numeric.c"

int     main()
{
    printf("is this numeric string? \"alE23QSm21\": %d\n", ft_str_is_numeric("alE23QSm21"));
    printf("is this numeric string? \"128,8\": %d\n", ft_str_is_numeric("128,8"));
    printf("is this numeric string? \"283\t8\": %d\n", ft_str_is_numeric("283\t8"));
    printf("is this numeric string? \"\": %d\n", ft_str_is_numeric(""));
    printf("is this numeric string? \"2819\": %d\n", ft_str_is_numeric("2819"));
    return (0);
}
