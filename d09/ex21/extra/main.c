#include <stdlib.h>
#include <stddef.h>
#include <time.h>
#include "ft_ultimate_fight.h"

int		main()
{
	t_perso		donnie_matrix;
	t_perso		dr_evil;
	int			seed;

	donnie_matrix.name = "Donnie Matrix";
	donnie_matrix.life = 100.0;
	dr_evil.name = "Dr. Evil";
	dr_evil.life = 100.0;
	srand(time(NULL));
	while (donnie_matrix.life != 0.0 && dr_evil.life != 0.0)
	{
		seed = rand() % 15;
		ft_ultimate_fight((seed % 2) ? &donnie_matrix : &dr_evil,
			(seed % 2) ? &dr_evil : &donnie_matrix, seed);
	}
	return (0);
}
