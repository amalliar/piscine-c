#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <limits.h>
#include "ft_putchar.c"
#include "ft_putnbr.c"

char    __ACTUAL[512] = {0};
char    __EXPECTED[512] = {0};
int     __idx_ACTUAL = 0;

int     expect_arr_eq(char *__EXPECTED, char *__ACTUAL, size_t size)
{
    for (size_t i = 0; i < size; i++)
        if (__EXPECTED[i] != __ACTUAL[i])
            return (1);
    return (0);
}

char    *print_err(void)
{
    char    *msg = (char *) malloc(1024 * sizeof(char));

    msg[0] = '\0';
    sprintf(msg, "\nERROR!\nExpected: \"%s\"\nBut got:  \"%s\"\n", \
            __EXPECTED, __ACTUAL);
    return (msg);
}

int     test(void)
{
    if (expect_arr_eq(__EXPECTED, __ACTUAL, 512)) {
        printf("\033[1;31m");
        printf("%s", print_err());
        printf("\033[0m\n");
        return (1);
    }
    __idx_ACTUAL = 0;
    memset(__ACTUAL, 0, 512);
    memset(__EXPECTED, 0, 512);
    return (0);
}

int     main()
{
    int     nb;

    srand(time(NULL));
    for (int i = 0; i < 200; i++) {
        nb = rand() * pow(-1, i);
        sprintf(__EXPECTED, "%d", nb);
        ft_putnbr(nb);
        if (test())
            return (0);
    }
    sprintf(__EXPECTED, "%d", 0);
    ft_putnbr(0);
    if (test())
        return (0);
    sprintf(__EXPECTED, "%d", INT_MIN);
    ft_putnbr(INT_MIN);
    if (test())
        return (0);
    sprintf(__EXPECTED, "%d", INT_MAX);
    ft_putnbr(INT_MAX);
    if (test())
        return (0);
    printf("\033[1;32m");
    printf("\nYou have passed all of the tests! :)\n");
    printf("\033[0m\n");
    return (0);
}
