/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 12:55:38 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 14:45:36 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

static bool		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

double			ft_parse_number(t_parser *self)
{
	double	result;

	ft_skip_whitespace(self);
	result = ft_atoi(self->string + self->index);
	while (ft_isdigit(self->string[self->index]))
		self->index++;
	return (result);
}
