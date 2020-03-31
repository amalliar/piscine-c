/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:09:28 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 08:06:28 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_disp_file.h"

int		ft_print_err(int code)
{
	if (code == ENOENT)
	{
		ft_putstr_fd(STDERR_FILENO, "File name missing.\n");
		return (ENOENT);
	}
	if (code == E2BIG)
	{
		ft_putstr_fd(STDERR_FILENO, "Too many arguments.\n");
		return (E2BIG);
	}
	if (code == OFAIL)
	{
		ft_putstr_fd(STDERR_FILENO, "open() failed.\n");
		return (OFAIL);
	}
	if (code == CFAIL)
	{
		ft_putstr_fd(STDERR_FILENO, "close() failed.\n");
		return (CFAIL);
	}
	if (code == RFAIL)
	{
		ft_putstr_fd(STDERR_FILENO, "read() failed.\n");
		return (RFAIL);
	}
}
