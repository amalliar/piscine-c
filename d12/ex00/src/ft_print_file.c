/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:25:45 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 08:58:56 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_disp_file.h"

int		ft_print_file(char *name)
{
	int		fd;

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return (ft_print_err(OFAIL));
	ft_filecopy(fd, STDOUT_FILENO);
	if (close(fd) == -1)
		return (ft_print_err(CFAIL));
	return (0);
}
