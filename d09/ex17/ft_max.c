/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 08:49:20 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 08:52:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		ft_max(int *tab, int length)
{
	int		max;

	max = INT_MIN;
	while (--length >= 0)
		if (tab[length] > max)
			max = tab[length];
	return (max);
}
