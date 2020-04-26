/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 09:58:09 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/26 09:54:42 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static bool		ft_isvalid(char *arg)
{
	int		errno_old;
	int		fd;

	errno_old = errno;
	errno = 0;
	fd = open(arg, O_RDONLY);
	if (errno)
	{
		errno = errno_old;
		return (false);
	}
	errno = errno_old;
	close(fd);
	return (true);
}

int				main(int argc, char **argv)
{
	bool		header_mode;
	bool		from_start;
	int			offset;
	int			i;

	if (ft_parse_options(argc, argv, &header_mode, &from_start, &offset))
		return (1);
	i = 1;
	while (i < argc)
	{
		errno = 0;
		if (argv[i][0] == '-')
			i += 2;
		else
		{
			ft_print_file(argv[i++], header_mode, from_start, offset);
			ft_putstr_fd((i < argc && !errno && \
				ft_isvalid(argv[i])) ? "\n" : "", STDOUT_FILENO);
			if (errno == EISDIR)
				return (errno);
		}
	}
	return (0);
}
