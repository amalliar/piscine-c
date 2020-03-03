/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 17:27:33 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 17:27:43 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M\n",
		(hour % 12) ? hour % 12 : 12, 
		(hour % 24 < 12) ? 'A' : 'P',
		((hour + 1) % 12) ? (hour + 1) % 12 : 12,
		((hour + 1) % 24 < 12) ? 'A' : 'P');
}
