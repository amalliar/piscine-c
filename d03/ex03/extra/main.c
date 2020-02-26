#include <stdio.h>
#include "ft_div_mod.c"

int     main()
{
    int     div;
    int     mod;

    ft_div_mod(42, 21, &div, &mod);
    printf("42 / 21 == %d\n", div);
    printf("42 %% 21 == %d\n", mod);
    ft_div_mod(21, 42, &div, &mod);
    printf("21 / 42 == %d\n", div);
    printf("21 %% 42 == %d\n", mod);
    return (0);
}
