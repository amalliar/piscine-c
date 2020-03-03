#include <stdio.h>
#include "ft_scrambler.c"

int		main(void)
{
	int		var_a0;
	int		*var_a1;
	int		**var_a2;
	int		***var_a3;

	int		var_b0;
	int		*var_b1;

	int		var_c0;
	int		*var_c1;
	int		**var_c2;
	int		***var_c3;
	int		****var_c4;
	int		*****var_c5;
	int		******var_c6;
	int		*******var_c7;

	int		var_d0;
	int		*var_d1;
	int		**var_d2;
	int		***var_d3;
	int		****var_d4;
	
	var_a0 = 1;
	var_a1 = &var_a0;
	var_a2 = &var_a1;
	var_a3 = &var_a2;

	var_b0 = 2;
	var_b1 = &var_b0;

	var_c0 = 3;
	var_c1 = &var_c0;
	var_c2 = &var_c1;
	var_c3 = &var_c2;
	var_c4 = &var_c3;
	var_c5 = &var_c4;
	var_c6 = &var_c5;
	var_c7 = &var_c6;

	var_d0 = 4;
	var_d1 = &var_d0;
	var_d2 = &var_d1;
	var_d3 = &var_d2;
	var_d4 = &var_d3;

	printf("a: %d, b: %d, c: %d, d: %d\n", var_a0, var_b0, var_c0, var_d0);
	ft_scrambler(var_a3, var_b1, var_c7, var_d4);
	printf("a: %d, b: %d, c: %d, d: %d\n", var_a0, var_b0, var_c0, var_d0);
	return (0);
}
