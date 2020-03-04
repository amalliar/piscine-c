/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 05:18:02 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 05:49:15 by amalliar         ###   ########.fr       */
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

static void		ft_swap(t_list *p1, t_list *p2)
{
	void	*tmp;

	tmp = p1->data;
	p1->data = p2->data;
	p2->data = tmp;
}

void			ft_list_sort(t_list **begin_list, int (*cmp)())
{
	unsigned int	list_sz;
	unsigned int	i;
	unsigned int	j;
	t_list			*tmp_i;
	t_list			*tmp_j;

	list_sz = (unsigned int)ft_list_size(*begin_list);
	i = 0;
	while (i < list_sz)
	{
		j = i + 1;
		while (j < list_sz)
		{
			tmp_i = ft_list_at(*begin_list, i);
			tmp_j = ft_list_at(*begin_list, j);
			if (cmp(tmp_i->data, tmp_j->data) > 0)
				ft_swap(tmp_i, tmp_j);
			j++;
		}
		i++;
	}
}
