#include <stdio.h>
#include "ft_putchar.c"
#include "ft_putnbr_base.c"

int     main()
{
    printf("Should pass basic test:\n"
           "nbr: 21\n"
           "base: \"0123456789\"\n");
    ft_putnbr_base(21, "0123456789");
    printf("\n\n");
    printf("Should pass negative test:\n"
           "nbr: -255\n"
           "base \"0123456789abcdef\"\n");
    ft_putnbr_base(-255, "0123456789abcdef");
    printf("\n\n");
    printf("Should pass \"add_chelou\" test:\n"
           "nbr: 233988\n"
           "base: \"gtaio luSnemf\"\n");
    ft_putnbr_base(233988, "gtaio luSnemf");
    printf("\n\n");
    printf("Should pass invalid input test\n"
           "nbr: 42\n"
           "base: \"0123+4\"\n");
    ft_putnbr_base(42, "0123+4");
    printf("\n");
    printf("Now let's print an ASCII code table!\n\n");
    printf("DEC   OCT   HEX  BIN        CHAR\n"); 
    printf("————————————————————————————————\n");
    for (int i = ' '; i <= '~'; i++) {
        ft_putnbr_base(i, "0123456789");
        printf("   ");
        if (i < 100)
            printf(" ");
        ft_putnbr_base(i, "01234567");
        printf("   ");
        if (i < 64)
            printf(" ");
        ft_putnbr_base(i, "0123456789abcdef");
        printf("   ");
        ft_putnbr_base(i, "01");
        if (i < 64)
            printf(" ");
        printf("    %c\n", i);
    }
    return (0);
}
