/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_negative.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 12:53:04 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 13:08:33 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

double		ft_parse_negative(t_parser *self)
{
	char	symbol;

	ft_skip_whitespace(self);
	symbol = self->string[self->index];
	if (symbol == '-')
	{
		self->index++;
		return (-1 * ft_parse_parenthesis(self));
	}
	else
		return (ft_parse_number(self));
}
