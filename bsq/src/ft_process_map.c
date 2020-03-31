/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:16:57 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 17:51:32 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void		ft_print_solution(t_map *map, int m_square_i, int m_square_j)
{
	register int	m_square_k;
	register int	m_square_l;
	register int	i;
	register int	j;

	m_square_k = m_square_i + map->m_square_sz - 1;
	m_square_l = m_square_j + map->m_square_sz - 1;
	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			if (!(map->m_matrix[i][j]))
				write(STDOUT_FILENO, &(map->obstacle), 1);
			else if (i >= m_square_i && i <= m_square_k && \
					j >= m_square_j && j <= m_square_l)
				write(STDOUT_FILENO, &(map->full), 1);
			else
				write(STDOUT_FILENO, &(map->empty), 1);
			j++;
		}
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

void			ft_process_map(t_map *map)
{
	int			m_square_i;
	int			m_square_j;

	ft_get_s_matrix(map);
	m_square_i = map->m_square_i;
	m_square_j = map->m_square_j;
	ft_print_solution(map, m_square_i, m_square_j);
	ft_free_map(map);
}
