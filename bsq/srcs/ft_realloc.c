/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 09:56:44 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/18 18:59:39 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*tmp;

	tmp = malloc(new_size);
	ft_memcpy(tmp, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (tmp);
}
