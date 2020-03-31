/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_parenthesis.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 12:49:27 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 14:43:35 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

double		ft_parse_parenthesis(t_parser *self)
{
	char		symbol;
	double		result;

	ft_skip_whitespace(self);
	symbol = self->string[self->index];
	if (symbol == '(')
	{
		self->index++;
		result = ft_parse_expression(self);
		ft_skip_whitespace(self);
		self->index++;
		return (result);
	}
	else
		return (ft_parse_negative(self));
}
