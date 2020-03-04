/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 13:50:10 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 05:44:56 by amalliar         ###   ########.fr       */
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

t_list			*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < ac)
		ft_list_push_front(&list, av[i++]);
	return (list);
}
