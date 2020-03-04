/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 13:36:21 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 05:44:16 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		count;

	if (!begin_list)
		return (0);
	count = 1;
	while (begin_list->next)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}
