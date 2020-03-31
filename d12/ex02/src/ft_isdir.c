/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 00:58:15 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 10:33:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

bool	ft_isdir(char *file)
{
	int		fd;
	bool	isdir;

	fd = open(file, O_RDWR);
	isdir = (errno == EISDIR);
	if (!isdir)
		close(fd);
	return (isdir);
}
