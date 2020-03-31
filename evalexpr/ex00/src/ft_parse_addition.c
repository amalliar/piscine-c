/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_addition.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 09:23:37 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 14:46:37 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

static void		ft_init_vars(double **values, size_t *values_sz, t_parser *self)
{
	*values = (double *)malloc(sizeof(double));
	*values_sz = 1;
	(*values)[0] = ft_parse_multiplic(self);
}

static double	ft_add_values(double *arr, size_t size)
{
	double	result;

	result = 0;
	while (size--)
		result += arr[size];
	return (result);
}

double			ft_parse_addition(t_parser *self)
{
	double		*values;
	double		result;
	size_t		values_sz;
	char		symbol;

	ft_init_vars(&values, &values_sz, self);
	while (1)
	{
		ft_skip_whitespace(self);
		symbol = self->string[self->index];
		if (symbol == '+' || symbol == '-')
		{
			self->index++;
			values = ft_realloc(values, (values_sz + 1) * sizeof(double),
				sizeof(double));
			values[values_sz] = (symbol == '-') ? \
				-1 * ft_parse_multiplic(self) : ft_parse_multiplic(self);
			values_sz++;
		}
		else
			break ;
	}
	result = ft_add_values(values, values_sz);
	free(values);
	return (result);
}
