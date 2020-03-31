/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbashir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:56:40 by sbashir           #+#    #+#             */
/*   Updated: 2020/03/14 17:40:17 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static bool		ft_isnumber(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int				ft_get_map_info(t_map *map, int ifd)
{
	char	c;
	char	rows[13];
	char	*prows;

	prows = rows;
	while (1)
	{
		if (read(ifd, &c, 1) < 1 || (prows - rows == 13))
			return (1);
		if (c == '\n')
			break ;
		*prows++ = c;
	}
	if (prows - rows >= 4)
	{
		map->full = *(prows - 1);
		map->obstacle = *(prows - 2);
		map->empty = *(prows - 3);
		*(prows - 3) = '\0';
	}
	else
		return (1);
	if (!ft_isnumber(rows) || map->empty == map->obstacle)
		return (1);
	return (!(map->rows = ft_atoi(rows)));
}
