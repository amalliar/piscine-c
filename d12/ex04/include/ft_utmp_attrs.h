/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utmp_attrs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 08:05:56 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/27 10:04:28 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTMP_ATTRS_H
# define FT_UTMP_ATTRS_H

typedef struct		s_utmp_attrs
{
	unsigned short	ut_namesize;
	unsigned short	ut_linesize;
	unsigned short	ut_hostsize;
}					t_utmp_attrs;

#endif
