#ifndef __FT_ULTIMATOR_H__
# define __FT_ULTIMATOR_H__
# include <stdlib.h>
# include <stdio.h>

void				ft_free(void *ptr)
{
	free(ptr);
	printf("FREE\n");
}

# define free		ft_free

/*
**
** With Windows VISTA, we were on the edge of the abyss.
** With Windows 8, we made a huge step forward.
**
** The Client: 'I have a computer running on Windows 8'
** The Technician: 'Yes...'
** The Client: 'And it doesn't work anymore'
** The Technician: 'Yeah, you already said...'
**
*/

#endif
