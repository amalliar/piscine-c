/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 04:40:41 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/11 08:50:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_opp.h"

long	ft_calc(int a, int b, char *op)
{
	short	i;

	i = 0;
	while (i < 5)
	{
		if (!ft_strcmp(g_opptab[i].op, op))
			return (g_opptab[i].func(a, b));
		i++;
	}
	return (g_opptab[5].func(a, b));
}
