#include <stdio.h>
#include <stddef.h>
#include "ft_ultimate_range.c"

static void		print_arr(int *arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
		printf("arr[%d]: %d\n", (int) i, arr[i]);
}

int				main(void)
{
	int		*arr;
	int		size;
	
	printf("Testing range: [-10, 10)\n");
	size = ft_ultimate_range(&arr, -10, 10);
	print_arr(arr, size);
	free(arr);
	printf("\nTesting range: [0, 0)\n");
	size = ft_ultimate_range(&arr, 0, 0);
	if (arr || size) {
		printf("\033[1;31m");
		printf("Error! ft_ultimate_range should return 0\n");
	}
	printf("\033[0m\n");
	printf("Testing range: [-3, -1)\n");
	size = ft_ultimate_range(&arr, -3, -1);
	print_arr(arr, size);
	free(arr);
	return (0);
}
