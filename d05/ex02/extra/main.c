#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <limits.h>
#include "ft_atoi.c"

char	BUFFER[32] = {0};

void	init(void)
{
    srand(time(NULL));
}

void	zero_test(void)
{
	fprintf(stderr, "\033[1;31m");
    assert(0 == ft_atoi("0"));
	fprintf(stdout, "\033[1;32m");
	printf("zero_test:    🗸 Test Passed\n");
}

void	limits_test(void)
{
	fprintf(stderr, "\033[1;31m");
    sprintf(BUFFER, "%d", INT_MIN);
    assert(INT_MIN == ft_atoi(BUFFER));
    sprintf(BUFFER, "%d", INT_MAX);
    assert(INT_MAX == ft_atoi(BUFFER));
	fprintf(stdout, "\033[1;32m");
	printf("limits_test:  🗸 Test Passed\n");
}

void	random_tests(void)
{
	fprintf(stderr, "\033[1;31m");
    for (int i = 0; i < 200; i++) {
        int num = rand() * pow(-1, i);
        sprintf(BUFFER, "%d",  num);
        assert(atoi(BUFFER) == ft_atoi(BUFFER));
    }
	fprintf(stdout, "\033[1;32m");
	printf("random_tests: 🗸 Test Passed\n");
}

void	junk_numbers(void)
{
	fprintf(stderr, "\033[1;31m");
    assert(48151 == ft_atoi("    48151"));
    assert(48151 == ft_atoi(" \t\n\v\f\r    48151"));
    assert(-48151 == ft_atoi(" \t\n\v\f\r    -48151lol3"));
	fprintf(stdout, "\033[1;32m");
	printf("junk_numbers: 🗸 Test Passed\n");
}

int		main(void)
{
	init();
	zero_test();
	limits_test();
	random_tests();
	junk_numbers();
	fprintf(stdout, "\033[1;32m");
	printf("\nYou have passed all of the tests! :)");
	fprintf(stdout, "\033[0m\n");
	return (0);
}
