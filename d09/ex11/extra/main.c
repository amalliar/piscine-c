#include <stdio.h>
#include "ft_perso.h"

static void		ft_init(t_perso *perso)
{
	printf(">>> Initialisation started...\n\n");	
	printf("self->name:       %s\n", perso->name);
	printf("self->life:       %.2f\n", perso->life);
	printf("self->age:        %d\n", perso->age);
	printf("self->profession: %d\n", perso->profession);
	printf("\n>>> Initialisation complete!\n");
}

int				main()
{
	t_perso		donnie;

	donnie.name = strdup("Donnie");
	donnie.life = 100.0;
	donnie.age = 24;
	donnie.profession = SAVE_THE_WORLD;
	ft_init(&donnie);
	(void)donnie;
	return (0);
}
