/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 10:34:24 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 12:58:24 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_perror(char *prog, char *arg)
{
	ft_putstr_fd(prog, STDERR_FILENO);
	ft_putstr_fd(": ", STDERR_FILENO);
	if (errno == EACCES || errno == ENOENT)
	{
		ft_putstr_fd("cannot open '", STDERR_FILENO);
		ft_putstr_fd(arg, STDERR_FILENO);
		ft_putstr_fd("' for reading: ", STDERR_FILENO);
	}
	else if (errno = EISDIR)
	{
		ft_putstr_fd("error reading '", STDERR_FILENO);
		ft_putstr_fd(arg, STDERR_FILENO);
		ft_putstr_fd("': ", STDERR_FILENO);
	}
	ft_putstr_fd(ft_strerror(errno), STDERR_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
}
