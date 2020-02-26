#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "ft_putchar.c"
#include "ft_is_negative.c"

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

int     main()
{
    srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        int nb = rand() * pow(-1, i);
        if (i % 4 == 0)
            nb *= 0;
        if (nb < 0) {
            sprintf(__EXPECTED, "N");
            ft_is_negative(nb);
            if (expect_arr_eq(__EXPECTED, __ACTUAL, 1)) {
                printf("\033[1;31m");
                printf("%s", print_err());
                return (0);
            }
        }
        else {
            sprintf(__EXPECTED, "P");
            ft_is_negative(nb);
            if (expect_arr_eq(__EXPECTED, __ACTUAL, 1)) {
                printf("\033[1;31m");
                printf("%s", print_err());
                return (0);
            }
        }
		__idx_ACTUAL = 0;
    }
    printf("\033[1;32m");
    printf("\nYou have passed all of the tests! :)\n");
    printf("\033[0m\n");
    return (0);
}
