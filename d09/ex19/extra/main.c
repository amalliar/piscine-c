#include <stdio.h>
#include "ft_unmatch.c"

int		main()
{
	int		arr1[7] = {1, 1, 2, 3, 4, 3, 4};
	int		arr2[9] = {1, 1, 2, 4, 3, 4, 2, 3, 4};

	printf("[");
	for (int i = 0; i < 7; i++)
		printf("%d%s", arr1[i], (i < 6) ? ", " : "]\n");
	printf(">>> ft_unmatch(arr1, 7): %d\n\n", ft_unmatch(arr1, 7));
	printf("[");
	for (int i = 0; i < 9; i++)
		printf("%d%s", arr2[i], (i < 8) ? ", " : "]\n");
	printf(">>> ft_unmatch(arr2, 9): %d\n", ft_unmatch(arr2, 9));
	return (0);
}
