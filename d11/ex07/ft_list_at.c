/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:42:03 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/11 14:52:45 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
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
