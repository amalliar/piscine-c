#include <stdio.h>
#include <stddef.h>
#include "ft_range.c"

static void		print_arr(int *arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
		printf("arr[%d]: %d\n", (int) i, arr[i]);
}

int				main(void)
{
	int		*arr;
	
	printf("Testing range: [-10, 10)\n");
	arr = ft_range(-10, 10);
	print_arr(arr, 20);
	free(arr);
	printf("\nTesting range: [0, 0)\n");
	arr = ft_range(0, 0);
	if (arr) {
		printf("\033[1;31m");
		printf("Error! ft_range should return NULL\n");
	}
	printf("\033[0m\n");
	printf("Testing range: [-3, -1)\n");
	arr = ft_range(-3, -1);
	print_arr(arr, 2);
	free(arr);
	return (0);
}
