/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:01:43 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 23:08:05 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void		ft_sorted_list_insert2(t_list **begin_list1,
					t_list *begin_list2, int (*cmp)())
{
	t_list	*tmp;

	if (cmp((*begin_list1)->data, begin_list2->data) > 0)
	{
		begin_list2->next = *begin_list1;
		*begin_list1 = begin_list2;
		return ;
	}
	tmp = *begin_list1;
	while (tmp->next && cmp(tmp->next->data, begin_list2->data) < 0)
		tmp = tmp->next;
	begin_list2->next = tmp->next;
	tmp->next = begin_list2;
}

void			ft_sorted_list_merge(t_list **begin_list1,
				t_list *begin_list2, int (*cmp)())
{
	t_list	*tmp;

	if (!begin_list1 || !begin_list2)
		return ;
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (begin_list2)
	{
		tmp = begin_list2->next;
		ft_sorted_list_insert2(begin_list1, begin_list2, cmp);
		begin_list2 = tmp;
	}
}
