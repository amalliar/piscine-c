#include <stdio.h>
#include "ft_find_next_prime.c"

int main()
{
	printf("First 10000 prime numbers:\n");
    int prime = ft_find_next_prime(-200);
    for (int i = 0; i < 10000; i++) {
        printf("%8d %8d\n", i + 1, prime);
        prime = ft_find_next_prime(prime + 1);
    }
    return (0);
}
