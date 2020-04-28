/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wtmp_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 06:15:56 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/28 13:44:01 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"
#include "ft_list.h"
#include "ft_utmp_attrs.h"

/*
** Usernames "LOGIN" and "shutdown" and devicenames "pts/x"
** without a hostname are skipped.
*/

static bool		ft_is_valid(struct utmp *entry)
{
	if (!ft_strcmp(entry->ut_name, "LOGIN") || \
		!ft_strcmp(entry->ut_name, "shutdown") || \
		!ft_strcmp(entry->ut_name, "") || \
		(!ft_strncmp(entry->ut_line, "pts", 3) && \
		!ft_strcmp("", entry->ut_host)))
		return (false);
	else
		return (true);
}

static void		ft_print_entry(struct utmp *entry, t_list *login_db, \
					t_utmp_attrs *utmp_attrs)
{
	ft_print_ut_name(entry, utmp_attrs);
	ft_putstr(" ");
	ft_print_ut_line(entry, utmp_attrs);
	ft_putstr("  ");
	ft_print_ut_host(entry, utmp_attrs);
	ft_putstr(" ");
	ft_print_ut_tv(entry, login_db);
	ft_putchar('\n');
}

/*
** Get last entry to be able to print "wtmp begins" line later.
*/

void			ft_wtmp_print(t_list *login_db, t_utmp_attrs *utmp_attrs)
{
	struct utmp		*entry;
	time_t			rawtime;
	struct tm		*timeinfo;
	char			time_str[128];

	if (login_db)
		rawtime = \
			((struct utmp*)((ft_list_last(login_db))->data))->ut_tv.tv_sec;
	else
		return ;
	while (login_db)
	{
		entry = (struct utmp*)login_db->data;
		if (ft_is_valid(entry))
			ft_print_entry(entry, login_db, utmp_attrs);
		login_db = login_db->next;
	}
	ft_putchar('\n');
	timeinfo = localtime(&rawtime);
	strftime(time_str, 128, "wtmp begins %a %b %e %X %Y\n", timeinfo);
	ft_putstr(time_str);
}
