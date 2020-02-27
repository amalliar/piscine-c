/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 00:18:23 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 01:51:45 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	size_t	arr_idx;

	if (min >= max)
		return (NULL);
	if (!(arr = (int *)malloc((max - min) * sizeof(int))))
		return (NULL);
	arr_idx = 0;
	while (min < max)
		arr[arr_idx++] = min++;
	return (arr);
}
