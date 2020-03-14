/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbashir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:16:06 by sbashir           #+#    #+#             */
/*   Updated: 2020/02/19 23:20:43 by sbashir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_get_line(t_map *map, int i, int ifd)
{
	int		j;
	int		ret;
	char	c;

	j = 0;
	while (1)
	{
		ret = read(ifd, &c, 1);
		if (j == map->cols)
		{
			if (c != '\n')
				return (1);
			else
				return (0);
		}
		if ((c != map->empty && c != map->obstacle) || ret < 1)
			return (1);
		map->m_matrix[i][j++] = (c == map->empty) ? 1 : 0;
	}
	return (1);
}
