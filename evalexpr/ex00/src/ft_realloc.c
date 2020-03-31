/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 09:56:44 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 14:10:48 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	*ft_realloc(void *ptr, size_t size, size_t type_size)
{
	void	*tmp;

	tmp = malloc(size);
	ft_memcpy(tmp, ptr, ((size / type_size) - 1) * type_size);
	free(ptr);
	return (tmp);
}
