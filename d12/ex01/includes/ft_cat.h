/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 04:08:09 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 04:52:59 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <stdbool.h>

void		ft_copy_file(int ifd, int ofd);
void		ft_putstr_fd(char *str, int ofd);
int			ft_strlen(char *str);
bool		ft_isdir(char *file);
char		*ft_strerror(int errnum);

#endif
