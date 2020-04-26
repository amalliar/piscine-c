/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 21:54:25 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/26 10:09:42 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <stddef.h>
# include <stdbool.h>

enum		e_formats
{
	DEFAULT,
	CANONICAL
};

enum		e_states
{
	UNIQUE,
	REPEAT
};

void	ft_build_buffer(char *file, char **buffer, size_t *buf_size);
void	ft_hexdump(void *addr, size_t size, int format);
void	ft_perror(char *prog, char *arg);
void	ft_putchar(char c);
void	ft_putnchar(char c, size_t num);
void	ft_putstr_fd(char *str, int ofd);
void	ft_hexdump(void *addr, size_t size, int format);
void	ft_putnbr_hex(size_t nbr, short digits);
void	*ft_memcpy(void *dest, void *src, size_t num);
void	*ft_realloc(void *ptr, size_t old_size, size_t new_size);
char	*ft_strerror(int errnum);
int		ft_strcmp(char *s1, char *s2);
int		ft_memcmp(void *ptr1, void *ptr2, size_t num);
int		ft_isprint(int c);
size_t	ft_strlen(char *str);

#endif
