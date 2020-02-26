#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <limits.h>
#include "ft_sort_integer_table.c"

void    init_arr(int *arr, size_t size, int max_value)
{
    srand(time(NULL));
    int sign = 1;
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % (max_value + 1) * sign;
        sign *= -1;
    }
}

void    print_arr(int *arr, size_t size)
{
    printf("Your function returned:");
    for (size_t i = 0; i < size; i++)
        printf("\narr[%-2d]: %4d", (int) i, arr[i]);
    printf("\n");
}

bool    is_sorted(int *arr, size_t size)
{
    for (size_t i = 1; i < size; i++)
        if (arr[i - 1] > arr[i]) {
            if (size <= 100)
                print_arr(arr, size);
            return (false);
        }
    return (true);
}

Test(test_suite, simple_tests)
{
    int     *arr = (int*) malloc(20 * sizeof(int));

    for (int i = 0; i < 20; i++) {
        init_arr(arr, 20, 100);
        ft_sort_integer_table(arr, 20);
        cr_assert(is_sorted(arr, 20), "array is not sorted in ascending order!");
    }
    free(arr);
}

Test(test_suite, BIG_INPUT_test)
{
    int     *arr = (int*) malloc(10000000 * sizeof(int));

    init_arr(arr, 10000000, INT_MAX);
    ft_sort_integer_table(arr, 10000000);
    cr_assert(is_sorted(arr, 10000000), "array is not sorted in ascending order!");
    free(arr);
}
