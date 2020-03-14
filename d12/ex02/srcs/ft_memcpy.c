/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbashir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:16:37 by sbashir           #+#    #+#             */
/*   Updated: 2020/03/14 11:05:12 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	*ft_memcpy(void *dest, void *src, size_t num)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (num--)
		*pdest++ = *psrc++;
	return (dest);
}
