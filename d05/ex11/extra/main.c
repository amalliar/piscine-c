#include <stdio.h>
#include "ft_str_is_alpha.c"

int     main()
{
    printf("is this alpha string? \"alEnQSmtIk\": %d\n", ft_str_is_alpha("alEnQSmtIk"));
    printf("is this alpha string? \"ksiw,s\": %d\n", ft_str_is_alpha("ksiw,s"));
    printf("is this alpha string? \"ksiw\ts\": %d\n", ft_str_is_alpha("ksiw\ts"));
    return (0);
}
