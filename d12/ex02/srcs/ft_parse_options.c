/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 11:04:56 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 14:52:17 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static bool		ft_str_isnum(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}
	return (true);
}

static void		ft_parse_c(char *arg, bool *from_start, int *offset)
{
	if (*arg == '+' || *arg == '-')
	{
		*from_start = (*arg == '+') ? 1 : 0;
		arg++;
	}
	else
		*from_start = 0;
	if (!ft_str_isnum(arg))
	{
		ft_putstr_fd("tail: invalid number of bytes: ‘", STDERR_FILENO);
		ft_putstr_fd(arg, STDERR_FILENO);
		ft_putstr_fd("’\n", STDERR_FILENO);
		errno = 136;
		return ;
	}
	*offset = ft_atoi(arg);
}

static int		ft_exit_error(char *msg, char *arg, int errnum)
{
	ft_putstr_fd(msg, STDERR_FILENO);
	ft_putstr_fd(arg, STDERR_FILENO);
	ft_putstr_fd("'\n", STDERR_FILENO);
	ft_putstr_fd("Try 'tail --help' for more information.\n", STDERR_FILENO);
	return (errnum);
}

int				ft_parse_options(int argc, char **argv, bool *header_mode,
					bool *from_start, int *offset)
{
	int		i;
	int		nb_files;

	i = 1;
	nb_files = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			if (!ft_strcmp(argv[i], "-c"))
			{
				if (i + 1 >= argc)
					return (ft_exit_error("tail: option requires an argument -- '", "c", 134));
				ft_parse_c(argv[++i], from_start, offset);
				if (errno)
					return (errno);
			}
			else
				return (ft_exit_error("tail: invalid option -- '", argv[i] + 1, 135));
		else
			nb_files++;
		i++;
	}
	*header_mode = (nb_files > 1) ? 1 : 0;
	return ((!from_start && offset == 0) ? 1 : 0);
}
