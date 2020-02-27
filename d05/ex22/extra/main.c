#include <stdio.h>
#include "ft_putchar.c"
#include "ft_putstr_non_printable.c"

int     main()
{
    printf("Coucou\ntu vas bien ?\n");
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    printf("\n\n");
    printf("Another\rtest\rstring\twith\vwords\n");
    ft_putstr_non_printable("Another\rtest\rstring\twith\vwords\n");
    printf("\n");
    return (0);
}
