#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int     main()
{
    int     a;
    int     b;

    a = 21;
    b = 42;
    printf("21 / 42 == ");
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n", a);
    printf("21 %% 42 == ");
    printf("%d\n", b);
    return (0);
}
