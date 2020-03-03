/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 07:55:44 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 08:21:07 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int				i;
	unsigned int	j;
	unsigned int	count;

	i = 1;
	j = 0;
	count = 0;
	while (j++ < 8 * sizeof(int))
	{
		if (value & i)
			count++;
		i <<= 1;
	}
	return (count);
}
