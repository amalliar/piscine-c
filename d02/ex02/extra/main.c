#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "ft_putchar.c"
#include "ft_print_numbers.c"

char    __ACTUAL[512] = {0};
char    __EXPECTED[512] = "0123456789";
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

int     main()
{
    ft_print_numbers();
    if (expect_arr_eq(__EXPECTED, __ACTUAL, 512)) {
        printf("\033[1;31m");
        printf("%s", print_err());
    }
    else {
        printf("\033[1;32m");
        printf("\nYou have passed all of the tests! :)\n");
    }
    printf("\033[0m\n");
    return (0);
}
