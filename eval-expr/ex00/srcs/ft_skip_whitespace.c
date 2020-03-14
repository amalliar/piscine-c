/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_whitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 09:46:13 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 09:49:38 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_skip_whitespace(t_parser *self)
{
	if (!self)
		return ;
	while (ft_isspace(self->string[self->index]))
		self->index++;
}
