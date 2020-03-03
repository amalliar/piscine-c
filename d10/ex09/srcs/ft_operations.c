/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 04:41:29 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/11 08:52:17 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

long	ft_sub(int a, int b)
{
	return (a - b);
}

long	ft_add(int a, int b)
{
	return (a + b);
}

long	ft_mul(int a, int b)
{
	return (a * b);
}

long	ft_div(int a, int b)
{
	if (!b)
	{
		ft_putstr(DIV_BY_ZERO);
		return (LONG_MIN);
	}
	return (a / b);
}

long	ft_mod(int a, int b)
{
	if (!b)
	{
		ft_putstr(MOD_BY_ZERO);
		return (LONG_MIN);
	}
	return (a % b);
}
