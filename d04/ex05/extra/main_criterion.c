#include <criterion/criterion.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include "ft_sqrt.c"

Test(test_suite, random_tests)
{
    int limit = (int) sqrt(INT_MAX);
    for (int i = 0; i <= limit; i++) {
        cr_expect(i == ft_sqrt(i * i), "sqrt(%d) expected: %d, but got: %d", i * i, i, ft_sqrt(i * i));
        cr_expect(0 == ft_sqrt((-1) * i * i), "sqrt(%d) expected: 0, but got: %d", (-1) * i * i, ft_sqrt((-1) * i * i));
        cr_expect(0 == ft_sqrt(i * i + 2), "sqrt(%d) expected: 0, but got: %d", i * i + 2, ft_sqrt(i * i + 2));
    }
}
