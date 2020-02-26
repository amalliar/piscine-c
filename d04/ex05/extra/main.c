#include <assert.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include "ft_sqrt.c"

int		main(void)
{
    int limit = (int) sqrt(INT_MAX);
	fprintf(stderr, "\033[1;31m");
    for (int i = 0; i <= limit; i++) {
        assert(i == ft_sqrt(i * i));
        assert(0 == ft_sqrt((-1) * i * i));
        assert(0 == ft_sqrt(i * i + 2));
    }
	fprintf(stdout, "\033[1;32m");
	printf("random_tests:    🗸 Test Passed\n");
	printf("\nYou have passed all of the tests! :)");
	fprintf(stdout, "\033[0m\n");
	return (0);
}
