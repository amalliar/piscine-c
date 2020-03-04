/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 06:36:08 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 10:28:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	elem = ft_create_elem(data);
	if (elem)
	{
		elem->next = *begin_list;
		*begin_list = elem;
	}
}

void			ft_sorted_list_insert(t_list **begin_list,
					void *data, int (*cmp)())
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!begin_list)
		return ;
	if (!*begin_list || cmp((*begin_list)->data, data) > 0)
	{
		ft_list_push_front(begin_list, data);
		return ;
	}
	tmp = *begin_list;
	while (tmp->next && cmp(tmp->next->data, data) < 0)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = ft_create_elem(data);
	tmp->next->next = tmp2;
}
