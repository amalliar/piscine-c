/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 07:16:20 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/28 16:17:18 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

static bool		ft_isempty(char *str)
{
	while (ft_isspace(*str))
		str++;
	return (!*str);
}

int				eval_expr(char *str)
{
	t_parser	self;
	size_t		str_sz;
	int			result;

	if (ft_isempty(str))
		return (0);
	str_sz = ft_strlen(str);
	self.string = (char *)malloc((str_sz + 1) * sizeof(char));
	ft_memcpy(self.string, str, str_sz + 1);
	self.index = 0;
	result = ft_parse_expression(&self);
	free(self.string);
	return (result);
}
