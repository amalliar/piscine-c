/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:46:44 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 05:04:21 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISP_FILE_H
# define FT_DISP_FILE_H
# define OFAIL		132
# define CFAIL		133
# define RFAIL		134
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

int			ft_strlen(char *str);
int			ft_print_err(int code);
int			ft_print_file(char *name);
int			ft_filecopy(int ifd, int ofd);
void		ft_putstr_fd(int ofd, char *str);

#endif
