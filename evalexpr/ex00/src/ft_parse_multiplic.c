/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_multiplic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:44:20 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 14:47:17 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

static void		ft_init_vars(double **values, size_t *values_sz,
					size_t **modules, size_t *modules_sz)
{
	*values = (double *)malloc(sizeof(double));
	*values_sz = 1;
	*modules = (size_t *)malloc(sizeof(size_t));
	*modules_sz = 0;
}

static void		ft_process_mult(t_parser *self, double **values,
					size_t *values_sz)
{
	self->index++;
	*values = ft_realloc(*values, (*values_sz + 1) * sizeof(double),
		sizeof(double));
	(*values)[*values_sz] = ft_parse_parenthesis(self);
	++*values_sz;
}

static void		ft_process_div(t_parser *self, double **values,
					size_t *values_sz)
{
	int		denom;

	self->index++;
	denom = ft_parse_parenthesis(self);
	*values = ft_realloc(*values, (*values_sz + 1) * sizeof(double),
		sizeof(double));
	(*values)[*values_sz] = 1.0 / denom;
	++*values_sz;
}

static void		ft_process_mod(size_t **modules, size_t *modules_sz,
					size_t values_sz)
{
	*modules = ft_realloc(*modules, (*modules_sz + 1) * sizeof(size_t),
		sizeof(size_t));
	(*modules)[*modules_sz] = values_sz;
	++*modules_sz;
}

double			ft_parse_multiplic(t_parser *self)
{
	double		*values;
	size_t		*modules;
	size_t		values_sz;
	size_t		modules_sz;
	char		symbol;

	ft_init_vars(&values, &values_sz, &modules, &modules_sz);
	values[0] = ft_parse_parenthesis(self);
	while (1)
	{
		ft_skip_whitespace(self);
		symbol = self->string[self->index];
		if (symbol == '*')
			ft_process_mult(self, &values, &values_sz);
		else if (symbol == '/')
			ft_process_div(self, &values, &values_sz);
		else if (symbol == '%')
		{
			ft_process_mod(&modules, &modules_sz, values_sz);
			ft_process_mult(self, &values, &values_sz);
		}
		else
			break ;
	}
	return (ft_calc_multiplic(&values, values_sz, &modules, modules_sz));
}
