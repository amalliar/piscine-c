#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <limits.h>
#include "ft_atoi.c"

void setup(void)
{
    srand(time(NULL));
}

char BUFFER[32] = {0};

Test(test_suite, zero_test)
{
    cr_expect(0 == ft_atoi("0"), "expected: 0, but got: %d", ft_atoi("0"));
}

Test(test_suite, limits_test)
{
    sprintf(BUFFER, "%d", INT_MIN);
    cr_expect(INT_MIN == ft_atoi(BUFFER), "expected: %d, but got: %d", INT_MIN, ft_atoi(BUFFER));
    sprintf(BUFFER, "%d", INT_MAX);
    cr_expect(INT_MAX == ft_atoi(BUFFER), "expected: %d, but got: %d", INT_MAX, ft_atoi(BUFFER));
}

Test(test_suite, random_tests, .init = setup)
{
    for (int i = 0; i < 200; i++) {
        int num = rand() * pow(-1, i);
        sprintf(BUFFER, "%d",  num);
        cr_expect(atoi(BUFFER) == ft_atoi(BUFFER), "expected: %d, but got: %d", atoi(BUFFER), ft_atoi(BUFFER));
    }
}

Test(test_suite, junk_numbers)
{
    cr_expect(48151 == ft_atoi("    48151"), "expected: 48151, but got: %d", ft_atoi("    48151"));
    cr_expect(48151 == ft_atoi(" \t\n\v\f\r    48151"), "expected: 48151, but got: %d", ft_atoi(" \t\n\v\f\r    48151"));
    cr_expect(-48151 == ft_atoi(" \t\n\v\f\r    -48151lol3"), "expected: -48151, but got: %d", ft_atoi(" \t\n\v\f\r    -48151lol3"));
}
