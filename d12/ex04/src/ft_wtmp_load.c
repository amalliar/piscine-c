/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wtmp_load.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 05:18:39 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/28 08:11:35 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"
#include "ft_list.h"
#include "ft_utmp_attrs.h"

/*
** Need to keep track of attribute lengths
** to align them properly when printing.
*/

static void		ft_get_attrs(struct utmp *entry, t_utmp_attrs *utmp_attrs)
{
	unsigned short	ut_attrsize;

	ut_attrsize = ft_strlen(entry->ut_name);
	if (ut_attrsize > utmp_attrs->ut_namesize)
		utmp_attrs->ut_namesize = ut_attrsize;
	if (!ft_strcmp(entry->ut_line, "~"))
		ut_attrsize = 11;
	else
		ut_attrsize = ft_strlen(entry->ut_line);
	if (ut_attrsize > utmp_attrs->ut_linesize)
		utmp_attrs->ut_linesize = ut_attrsize;
	ut_attrsize = ft_strlen(entry->ut_host);
	if (ut_attrsize > utmp_attrs->ut_hostsize)
		utmp_attrs->ut_hostsize = ut_attrsize;
}

t_list			*ft_wtmp_load(t_utmp_attrs *utmp_attrs)
{
	int				fd;
	size_t			entrysize;
	struct utmp		*entry;
	t_list			*login_db;

	fd = open("/var/log/wtmp", O_RDONLY);
	entrysize = sizeof(struct utmp);
	entry = (struct utmp*)malloc(entrysize);
	login_db = NULL;
	while (read(fd, entry, entrysize))
	{
		ft_get_attrs(entry, utmp_attrs);
		ft_list_push_front(&login_db, entry);
		entry = (struct utmp*)malloc(entrysize);
	}
	close(fd);
	free(entry);
	return (login_db);
}
