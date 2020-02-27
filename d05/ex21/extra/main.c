#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <math.h>
#include "ft_atoi_base.c"

static void     print_err(int expected, int actual)
{
    printf("\033[1;31m");
    printf("\nERROR!"
           "\nExpected: %d"
           "\nBut got:  %d", expected, actual);
    printf("\033[0m\n\n");
}

static void     print_tests_passed(void)
{
    printf("\033[1;32m");
    printf("\nYou have passed all of the tests! =)");
    printf("\033[0m\n\n");
}

static int      test_corner_cases(void)
{
    char    buffer[32] = {0};
    int     actual = 0;
    
    actual = ft_atoi_base("0", "01");
    if (0 != actual) {
        print_err(0, actual);
        return (1);
    }
    sprintf(buffer, "%d", INT_MIN);
    actual = ft_atoi_base(buffer, "0123456789");
    if (INT_MIN != actual) {
        print_err(INT_MIN, actual);
        return (1);
    }
    sprintf(buffer, "%d", INT_MAX);
    actual = ft_atoi_base(buffer, "0123456789");
    if (INT_MAX != actual) {
        print_err(INT_MAX, actual);
        return (1);
    }
    sprintf(buffer, "Salut");
    actual = ft_atoi_base(buffer, "gtaio luSnemf");
    if (233988 != actual) {
        print_err(233988, actual);
        return (1);
    }
    sprintf(buffer, "--2A");
    actual = ft_atoi_base(buffer, "0123456789ABCDEF");
    if (0 != actual) {
        print_err(0, actual);
        return (1);
    }
    sprintf(buffer, "-+2A");
    actual = ft_atoi_base(buffer, "0123456789ABCDEF");
    if (0 != actual) {
        print_err(0, actual);
        return (1);
    }
    sprintf(buffer, "+-2A");
    actual = ft_atoi_base(buffer, "0123456789ABCDEF");
    if (0 != actual) {
        print_err(0, actual);
        return (1);
    }
    sprintf(buffer, "++2A");
    actual = ft_atoi_base(buffer, "0123456789ABCDEF");
    if (0 != actual) {
        print_err(0, actual);
        return (1);
    }
    sprintf(buffer, "2-A");
    actual = ft_atoi_base(buffer, "0123456789ABCDEF");
    if (2 != actual) {
        print_err(2, actual);
        return (1);
    }
    sprintf(buffer, "+2-A");
    actual = ft_atoi_base(buffer, "0123456789ABCDEF");
    if (2 != actual) {
        print_err(2, actual);
        return (1);
    }
    return (0);
}

static int      test_random(void)
{
    char    buffer[32] = {0};
    char    *base = "0123456789abcdef";
    int     nb;
    
    srand(time(NULL));
    for (int i = 0; i < 200; i++) {
        nb = rand() * pow(-1, i);
        sprintf(buffer, "%d", nb);
        if ((int) strtol(buffer, NULL, 16) != ft_atoi_base(buffer, base)) {
            print_err((int) strtol(buffer, NULL, 16), \
                            ft_atoi_base(buffer, base));
            return (1);
        }
    }
    return (0);
}

int             main()
{
    if (test_corner_cases() || test_random())
        return (0);
    print_tests_passed();
    return (0);
}
