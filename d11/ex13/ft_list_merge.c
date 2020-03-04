/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 04:31:45 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 05:47:53 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (begin_list);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void			ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	if (!begin_list1)
		return ;
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	tmp = ft_list_last(*begin_list1);
	tmp->next = begin_list2;
}
