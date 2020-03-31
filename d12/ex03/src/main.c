/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 22:35:21 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/29 06:14:58 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static int		ft_get_format(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
		{
			if (!ft_strcmp(argv[i], "-C"))
				return (CANONICAL);
			else
			{
				ft_putstr_fd("hexdump: invalid option -- '", STDERR_FILENO);
				write(STDERR_FILENO, argv[i] + 1, 1);
				ft_putstr_fd("'\nTry 'hexdump --help' for more information.\n", \
					STDERR_FILENO);
				return (-1);
			}
		}
		i++;
	}
	return (DEFAULT);
}

int				main(int argc, char **argv)
{
	char	*buffer;
	size_t	buf_size;
	int		format;
	int		i;

	if ((format = ft_get_format(argc, argv)) == -1)
		return (1);
	buffer = NULL;
	buf_size = 0;
	if ((format == DEFAULT && argc == 1) ||
		(format == CANONICAL && argc == 2))
	{
		ft_build_buffer("STDIN", &buffer, &buf_size);
		ft_hexdump(buffer, buf_size, format);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		errno = 0;
		if (argv[i][0] == '-')
			i++;
		else
			ft_build_buffer(argv[i++], &buffer, &buf_size);
	}
	if (!buffer)
	{
		ft_putstr_fd("hexdump: all input file arguments failed\n", \
			STDERR_FILENO);
		return (1);
	}
	ft_hexdump(buffer, buf_size, format);	
	free(buffer);
	return (0);
}
