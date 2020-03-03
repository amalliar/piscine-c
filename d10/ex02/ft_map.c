/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:10:43 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/10 11:10:45 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*map;
	int		i;

	map = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
