#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "ft_putchar.c"
#include "ft_print_comb.c"

char    __ACTUAL[4096] = {0};
char    __EXPECTED[4096] = "012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789";
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
    char    *msg = (char *) malloc(4096 * sizeof(char));

    msg[0] = '\0';
    sprintf(msg, "\nERROR!\nExpected: \"%s\"\nBut got:  \"%s\"\n", \
            __EXPECTED, __ACTUAL);
    return (msg);
}

int     main()
{
    ft_print_comb();
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
