#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <math.h>
#include "ft_swap.c"

int main()
{
    printf("\nShould pass some random tests:\n");
    srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        int a = rand() * (int) pow(-1, i);
        int b = rand() * (int) pow(-1, i + 1);
        printf("\na: %d, b: %d", a, b);
        ft_swap(&a, &b);
        printf("\na: %d, b: %d\n", a, b);
    }
    int a = INT_MIN;
    int b = INT_MAX;
    printf("\na: %d, b: %d", a, b);
    ft_swap(&a, &b);
    printf("\na: %d, b: %d\n", a, b);
    printf("\n");
}
