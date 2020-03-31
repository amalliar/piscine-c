/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 09:55:27 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 14:44:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <stdbool.h>
# include <stddef.h>

int			ft_atoi(char *str);
int			ft_strcmp(char *s1, char *s2);
int			ft_parse_options(int argc, char **argv, bool *header_mode,
				bool *from_start, int *offset);
void		ft_perror(char *prog, char *arg);
void		ft_putstr_fd(char *str, int ofd);
void		*ft_realloc(void *ptr, size_t old_size, size_t new_size);
void		*ft_memcpy(void *dest, void *src, size_t num);
void		ft_print_file(char *file, bool header_mode, bool from_start,
				int offset);
bool		ft_isdir(char *file);
char		*ft_strerror(int errnum);
size_t		ft_strlen(char *str);

#endif
