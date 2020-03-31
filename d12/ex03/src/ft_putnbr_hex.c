/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 01:11:39 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/23 01:12:42 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_putnbr_hex(size_t nbr, short digits)
{
	int		j;
	short	*buffer;

	buffer = (short *)malloc(digits * sizeof(short));
	j = digits - 1;
	while (j >= 0)
	{
		buffer[j] = nbr % 16;
		nbr /= 16;
		j--;
	}
	j = 0;
	while (j < digits)
	{
		ft_putchar("0123456789abcdef"[buffer[j]]);
		j++;
	}
	free(buffer);
}
