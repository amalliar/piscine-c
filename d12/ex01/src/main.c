/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main.c												:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: amalliar <marvin@42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2020/02/13 00:58:15 by amalliar		   #+#	  #+#			  */
/*	 Updated: 2020/02/13 05:55:44 by amalliar		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "ft_cat.h"

static void		ft_perror(char *prog, char *arg, int errnum)
{
	ft_putstr_fd(prog, STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putstr_fd(arg, STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putstr_fd(ft_strerror(errnum), STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
}

int				main(int ac, char **av)
{
	int		i;
	int		ifd;

	if (ac == 1)
		ft_copy_file(STDIN_FILENO, STDOUT_FILENO);
	i = 1;
	while (i < ac)
	{
		errno = 0;
		ifd = open(av[i++], O_RDONLY);
		if (!errno && !ft_isdir(av[i - 1]))
		{
			ft_copy_file(ifd, STDOUT_FILENO);
			close(ifd);
		}
		else
			ft_perror("cat", av[i - 1], errno);
	}
	return (0);
}
