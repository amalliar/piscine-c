/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_multiplic.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 12:12:15 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 16:38:42 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

static bool		ft_ispresent(size_t *arr, size_t size, unsigned key)
{
	size_t		i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == key)
			return (true);
		i++;
	}
	return (false);
}

double			ft_calc_multiplic(double **values, size_t values_sz,
					size_t **modules, size_t modules_sz)
{
	double		result;
	unsigned	i;

	result = 1.0;
	i = 0;
	while (i < values_sz)
	{
		if (ft_ispresent(*modules, modules_sz, i))
			result = (double)((int)result % (int)(*values)[i]);
		else
			result = (double)(int)(result * (*values)[i]);
		i++;
	}
	free(*values);
	free(*modules);
	return (result);
}
