/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ut_tv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 12:54:16 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/28 13:42:26 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"
#include "ft_list.h"

/*
** Writing your own localtime() and strftime() is
** a whole new adventure...
*/

static time_t		ft_get_timestamp_end(struct utmp *entry, \
						t_list *login_db, bool *is_final)
{
	struct utmp		*current;

	if (login_db)
		login_db = login_db->prev;
	while (login_db)
	{
		current = (struct utmp*)login_db->data;
		if (!ft_strcmp(current->ut_line, entry->ut_line))
		{
			if (current->ut_type == USER_PROCESS || \
				ft_strncmp(entry->ut_line, "tty", 3))
			{
				*is_final = false;
				return (current->ut_tv.tv_sec);
			}
		}
		else if (!ft_strcmp(current->ut_user, "shutdown"))
		{
			*is_final = true;
			return (current->ut_tv.tv_sec);
		}
		login_db = login_db->prev;
	}
	return (0);
}

static void			ft_print_session_delta(time_t start, time_t end)
{
	time_t		delta;
	time_t		delta_day;
	time_t		delta_hour;
	time_t		delta_min;

	delta = end - start;
	delta_day = delta / 86400;
	delta_hour = delta % 86400 / 3600;
	delta_min = delta % 86400 % 3600 / 60;
	if (delta_day != 0)
	{
		ft_putstr("(");
		ft_putnbr(delta_day, 1);
		ft_putstr("+");
		ft_putnbr(delta_hour, 2);
		ft_putstr(":");
		ft_putnbr(delta_min, 2);
		ft_putstr(")");
		return ;
	}
	ft_putstr(" (");
	ft_putnbr(delta_hour, 2);
	ft_putstr(":");
	ft_putnbr(delta_min, 2);
	ft_putstr(")");
}

void				ft_print_ut_tv(struct utmp *entry, t_list *login_db)
{
	time_t		timestamp_start;
	time_t		timestamp_end;
	char		time_string[128];
	bool		is_final;

	timestamp_start = entry->ut_tv.tv_sec;
	timestamp_end = ft_get_timestamp_end(entry, login_db, &is_final);
	strftime(time_string, 128, "%a %b %e %R ", localtime(&timestamp_start));
	ft_putstr(time_string);
	if (timestamp_end == 0)
	{
		if (!ft_strcmp(entry->ut_user, "reboot"))
			ft_putstr("  still running");
		else if (!ft_strncmp(entry->ut_line, "tty", 3) || \
			!ft_strncmp(entry->ut_line, "pts", 3))
			ft_putstr("  still logged in");
		return ;
	}
	if ((!ft_strncmp(entry->ut_line, "tty", 3) || \
		!ft_strncmp(entry->ut_line, "pts", 3)) && is_final)
		strftime(time_string, 128, "- down  ", localtime(&timestamp_end));
	else
		strftime(time_string, 128, "- %R ", localtime(&timestamp_end));
	ft_putstr(time_string);
	ft_print_session_delta(timestamp_start, timestamp_end);
}
