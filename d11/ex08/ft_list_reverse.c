/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 00:25:48 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 05:46:08 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static int		ft_list_size(t_list *begin_list)
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

static t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list || !nbr)
		return (begin_list);
	while (begin_list && nbr)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	return (begin_list);
}

void			ft_list_reverse(t_list **begin_list)
{
	unsigned int	list_sz;
	t_list			*current;
	t_list			*last;

	list_sz = ft_list_size(*begin_list);
	if (list_sz < 2)
		return ;
	last = ft_list_at(*begin_list, list_sz - 1);
	while (list_sz--)
	{
		current = ft_list_at(*begin_list, list_sz);
		if (list_sz > 0)
			current->next = ft_list_at(*begin_list, list_sz - 1);
		else
			current->next = NULL;
	}
	*begin_list = last;
}
