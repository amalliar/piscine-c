/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:55:17 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 23:21:20 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

static char		*ft_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return ((c == '\0') ? str : NULL);
}

static int		ft_is_valid(char *str, char *base)
{
	if (!str || !*str || !base || !*base || !*(base + 1))
		return (0);
	while (*str)
	{
		if (!(*str == '+' || *str == '-' || ft_strchr(base, *str)))
			return (0);
		str++;
	}
	if (ft_strchr(base, '+') || ft_strchr(base, '-'))
		return (0);
	while (*base)
	{
		if (ft_strchr(base + 1, *base))
			return (0);
		base++;
	}
	return (1);
}

static int		ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		nb;
	int		radix;

	if (!ft_is_valid(str, base))
		return (0);
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	else
		sign = 1;
	nb = 0;
	radix = ft_strchr(base, '\0') - base;
	while (*str && ft_strchr(base, *str))
	{
		nb = nb * radix + (ft_strchr(base, *str) - base);
		str++;
	}
	return (sign * nb);
}

static char		*ft_lltoa_base(long long nbr, char *base_to)
{
	char	*result;
	bool	negative;
	int		radix;

	negative = (nbr < 0) ? 1 : 0;
	nbr *= (negative) ? -1 : 1;
	result = (char *)malloc(64 * sizeof(char));
	result += 63;
	if (nbr == 0)
	{
		*result-- = '\0';
		*result = '0';
		return (result);
	}
	radix = ft_strchr(base_to, '\0') - base_to;
	while (nbr)
	{
		*result-- = base_to[nbr % radix];
		nbr /= radix;
	}
	if (negative)
		*result = '-';
	else
		result++;
	return (result);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	inbr;

	inbr = (long long)ft_atoi_base(nbr, base_from);
	return (ft_lltoa_base(inbr, base_to));
}
