/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ut_host.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 10:04:53 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/27 12:36:15 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"
#include "ft_utmp_attrs.h"

void	ft_print_ut_host(struct utmp *entry, t_utmp_attrs *utmp_attrs)
{
	unsigned short		ut_hostsize;

	ut_hostsize = ft_putstr(entry->ut_host);
	while (ut_hostsize < utmp_attrs->ut_hostsize)
	{
		ft_putchar(' ');
		ut_hostsize++;
	}
}
