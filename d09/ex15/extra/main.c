#include <stdlib.h>
#include <stddef.h>
#include <time.h>
#include "ft_perso.h"
#include "ft_fight.h"

int		main()
{
	t_perso		donnie_matrix;
	t_perso		frau_farbissina;
	float		attack;
	int			seed;

	donnie_matrix.name = "Donnie Matrix";
	donnie_matrix.life = 100.0;
	frau_farbissina.name = "Frau Farbissina";
	frau_farbissina.life = 100.0;
	srand(time(NULL));
	while (donnie_matrix.life != 0.0 && frau_farbissina.life != 0.0)
	{
		seed = rand();
		if (seed % 3 == 0)
			attack = KICK;
		else if (seed % 3 == 1)
			attack = PUNCH;
		else if (seed % 3 == 2)
			attack = HEADBUTT;
		ft_fight((seed % 2) ? &donnie_matrix : &frau_farbissina,
			(seed % 2) ? &frau_farbissina : &donnie_matrix,
			attack);
	}
	return (0);
}
