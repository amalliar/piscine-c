/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_m_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:52:54 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 17:44:38 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void		ft_set_null(t_map *map)
{
	int		i;

	i = 0;
	while (i < map->rows)
		map->m_matrix[i++] = NULL;
}

int				ft_get_m_matrix(t_map *map, int ifd)
{
	int		i;

	map->m_matrix = (unsigned short **)malloc(map->rows * \
		sizeof(unsigned short *));
	ft_set_null(map);
	if (ft_get_first_line(map, ifd))
		return (1);
	i = 1;
	while (i < map->rows)
	{
		map->m_matrix[i] = (unsigned short *)malloc(map->cols * \
			sizeof(unsigned short));
		if (ft_get_line(map, i, ifd))
			return (1);
		i++;
	}
	if (read(ifd, &i, 1))
		return (1);
	return (0);
}
