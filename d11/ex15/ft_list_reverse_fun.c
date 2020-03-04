/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 06:22:19 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 06:32:42 by amalliar         ###   ########.fr       */
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

void			ft_swap(t_list *p1, t_list *p2)
{
	void	*tmp;

	tmp = p1->data;
	p1->data = p2->data;
	p2->data = tmp;
}

void			ft_list_reverse_fun(t_list *begin_list)
{
	unsigned int	beg;
	unsigned int	end;

	if (!begin_list)
		return ;
	beg = 0;
	end = ft_list_size(begin_list) - 1;
	while (beg < end)
	{
		ft_swap(ft_list_at(begin_list, beg), ft_list_at(begin_list, end));
		beg++;
		end--;
	}
}
