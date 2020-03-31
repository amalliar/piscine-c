/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_s_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbashir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 06:22:02 by sbashir           #+#    #+#             */
/*   Updated: 2020/02/19 19:32:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int		ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= c && b <= a)
		return (b);
	else
		return (c);
}

void			ft_get_s_matrix(t_map *map)
{
	register int	row;
	register int	col;

	row = map->rows - 1;
	while (row >= 0)
	{
		col = map->cols - 1;
		while (col >= 0)
		{
			if (map->m_matrix[row][col])
			{
				if (!(row == map->rows - 1 || col == map->cols - 1))
					map->m_matrix[row][col] = ft_min(map->m_matrix[row + \
1][col + 1], map->m_matrix[row + 1][col], map->m_matrix[row][col + 1]) + 1;
				if (map->m_matrix[row][col] >= map->m_square_sz)
				{
					map->m_square_sz = map->m_matrix[row][col];
					map->m_square_i = row;
					map->m_square_j = col;
				}
			}
			col--;
		}
		row--;
	}
}
