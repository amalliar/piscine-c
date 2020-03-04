/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:50:10 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/11 13:04:45 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	elem = *begin_list;
	while (elem->next != NULL)
		elem = elem->next;
	elem->next = ft_create_elem(data);
}
