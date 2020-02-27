/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 01:21:07 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 01:52:19 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		range_idx;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = (int *)malloc((max - min) * sizeof(int))))
		return (0);
	range_idx = 0;
	i = min;
	while (i < max)
		(*range)[range_idx++] = i++;
	return (max - min);
}
