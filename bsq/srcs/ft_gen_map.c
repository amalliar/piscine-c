/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gen_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:07:27 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/19 20:40:04 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map	*ft_gen_map(char *file)
{
	t_map	*map;
	int		ifd;

	if (!ft_strcmp(file, "STDIN"))
		ifd = STDIN_FILENO;
	else
		ifd = open(file, O_RDONLY);
	if (ifd == -1)
		return (ft_map_error());
	map = (t_map *)malloc(sizeof(t_map));
	if (ft_get_map_info(map, ifd))
	{
		free(map);
		return (ft_map_error());
	}
	if (ft_get_m_matrix(map, ifd))
	{
		ft_free_map(map);
		return (ft_map_error());
	}
	close(ifd);
	map->m_square_sz = 0;
	return (map);
}
