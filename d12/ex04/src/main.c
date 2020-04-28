/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:10:24 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/28 08:03:05 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"
#include "ft_list.h"
#include "ft_utmp_attrs.h"

static void		ft_init_utmp_attrs(t_utmp_attrs *utmp_attrs)
{
	utmp_attrs->ut_namesize = 0;
	utmp_attrs->ut_linesize = 0;
	utmp_attrs->ut_hostsize = 0;
}

int				main(void)
{
	t_list			*login_db;
	t_utmp_attrs	utmp_attrs;

	ft_init_utmp_attrs(&utmp_attrs);
	login_db = ft_wtmp_load(&utmp_attrs);
	ft_wtmp_print(login_db, &utmp_attrs);
	ft_list_clear(&login_db);
	return (0);
}
