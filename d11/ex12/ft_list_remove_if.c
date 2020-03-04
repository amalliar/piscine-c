/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:17:34 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 04:29:08 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!begin_list)
		return ;
	while (*begin_list && !cmp((*begin_list)->data, data_ref))
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	tmp = *begin_list;
	while (tmp)
	{
		if (tmp->next && !cmp(tmp->next->data, data_ref))
		{
			tmp2 = tmp->next;
			tmp->next = tmp->next->next;
			free(tmp2);
		}
		tmp = tmp->next;
	}
}
