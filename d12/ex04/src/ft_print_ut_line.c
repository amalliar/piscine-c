/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ut_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 09:49:04 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/27 12:35:35 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"
#include "ft_utmp_attrs.h"

void	ft_print_ut_line(struct utmp *entry, t_utmp_attrs *utmp_attrs)
{
	unsigned short		ut_linesize;

	if (!ft_strcmp(entry->ut_line, "~"))
		ut_linesize = ft_putstr("system boot");
	else
		ut_linesize = ft_putstr(entry->ut_line);
	while (ut_linesize < utmp_attrs->ut_linesize)
	{
		ft_putchar(' ');
		ut_linesize++;
	}
}
