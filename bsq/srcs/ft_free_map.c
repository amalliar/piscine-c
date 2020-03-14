/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:31:13 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 17:46:03 by sbashir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_free_map(t_map *map)
{
	int		i;

	i = 0;
	while (i < map->rows)
		if (map->m_matrix[i])
			free(map->m_matrix[i++]);
		else
			break ;
	free(map->m_matrix);
	free(map);
}
