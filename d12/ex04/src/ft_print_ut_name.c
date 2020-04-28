/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ut_name.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 09:23:14 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/27 12:33:20 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"
#include "ft_utmp_attrs.h"

void	ft_print_ut_name(struct utmp *entry, t_utmp_attrs *utmp_attrs)
{
	unsigned short		ut_namesize;

	ut_namesize = ft_putstr(entry->ut_name);
	while (ut_namesize < utmp_attrs->ut_namesize)
	{
		ft_putchar(' ');
		ut_namesize++;
	}
}
