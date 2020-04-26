/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:46:29 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/26 10:09:04 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int		ft_memcmp(void *ptr1, void *ptr2, size_t num)
{
	unsigned char	*block1;
	unsigned char	*block2;
	size_t			i;

	block1 = (unsigned char *)ptr1;
	block2 = (unsigned char *)ptr2;
	i = 0;
	while (i < num)
	{
		if (*block1 != *block2)
			return (*block1 - *block2);
		block1++;
		block2++;
		i++;
	}
	return (0);
}
