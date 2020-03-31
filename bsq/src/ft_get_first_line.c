/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_first_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbashir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:08:25 by sbashir           #+#    #+#             */
/*   Updated: 2020/02/19 21:11:23 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_get_first_line(t_map *map, int ifd)
{
	char		c;
	int			i;
	int			ret;

	map->m_matrix[0] = (unsigned short *)malloc(128 * sizeof(unsigned short));
	map->cols = 128;
	i = 0;
	while (1)
	{
		ret = read(ifd, &c, 1);
		if (c == '\n')
			break ;
		if ((c != map->empty && c != map->obstacle) || ret < 1)
			return (1);
		map->m_matrix[0][i++] = (c == map->empty) ? 1 : 0;
		if (i == map->cols)
		{
			map->m_matrix[0] = (unsigned short *)ft_realloc(map->m_matrix[0], \
	map->cols * sizeof(unsigned short), map->cols * 2 * sizeof(unsigned short));
			map->cols *= 2;
		}
	}
	map->m_matrix[0] = (unsigned short *)ft_realloc(map->m_matrix[0], \
		map->cols * sizeof(unsigned short), i * sizeof(unsigned short));
	return (!(map->cols = i));
}
