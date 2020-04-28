/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 14:04:45 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/28 10:42:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LAST_H
# define FT_LAST_H
# include <utmp.h>
# include <time.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "ft_list.h"
# include "ft_utmp_attrs.h"

t_list		*ft_wtmp_load(t_utmp_attrs *utmp_attrs);
void		ft_wtmp_print(t_list *account_db, t_utmp_attrs *utmp_attrs);
void		ft_print_ut_name(struct utmp *entry, t_utmp_attrs *utmp_attrs);
void		ft_print_ut_line(struct utmp *entry, t_utmp_attrs *utmp_attrs);
void		ft_print_ut_host(struct utmp *entry, t_utmp_attrs *utmp_attrs);
void		ft_print_ut_tv(struct utmp *entry, t_list *account_db);
void		ft_putchar(char c);
void		ft_putnbr(int nb, size_t padding);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
size_t		ft_putstr(char *str);
size_t		ft_strlen(char *str);

#endif
