/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 02:01:02 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/01 21:26:37 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_sqrt(int nb)
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
	return (middle);
}

int				ft_is_prime(int nb)
{
	int		i;
	int		limit;

	if (nb < 2)
		return (0);
	i = 2;
	limit = ft_sqrt(nb);
	while (i <= limit)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
