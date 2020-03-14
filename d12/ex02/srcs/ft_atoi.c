/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:42:20 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/13 12:34:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static int		ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
			c == '\v' || c == '\f' || c == '\r');
}

static int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int				ft_atoi(char *str)
{
	int		number;
	int		sign;

	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	else
		sign = 1;
	number = 0;
	while (ft_isdigit(*str))
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (sign * number);
}
