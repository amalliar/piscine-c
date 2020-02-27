/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 01:56:04 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/01 21:24:07 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Binary search implementation.
*/

int		ft_sqrt(int nb)
{
	int		left;
	int		right;
	int		middle;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	left = 0;
	right = nb / 2;
	while (left <= right)
	{
		middle = (left + right) / 2;
		if ((long long)middle * middle < nb)
			left = middle + 1;
		else if ((long long)middle * middle > nb)
			right = middle - 1;
		else
			return (middle);
	}
	return (0);
}
