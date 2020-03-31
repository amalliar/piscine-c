/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 11:56:47 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 15:12:40 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static void		ft_print_header(char *file)
{
	ft_putstr_fd("==> ", STDOUT_FILENO);
	ft_putstr_fd(file, STDOUT_FILENO);
	ft_putstr_fd(" <==\n", STDOUT_FILENO);
}

static void		ft_get_file(char **buf, int ifd)
{
	size_t		buf_size;
	char		*pbuf;
	int			ret;

	*buf = (char *)malloc(512);
	buf_size = 512;
	pbuf = *buf;
	while ((ret = read(ifd, pbuf, 512)))
	{
		if (ret < 512)
			break ;
		else
		{
			*buf = (char *)ft_realloc(*buf, buf_size, buf_size + 512);
			pbuf = *buf + buf_size;
			buf_size += 512;
		}
	}
	*(pbuf + ret) = '\0';
}

static void		ft_print_file_tail(char *buf, bool from_start, int offset)
{
	long long	buf_size;

	buf_size = ft_strlen(buf);
	if (offset > buf_size)
	{
		if (!from_start)
			offset = buf_size;
		else
			return ;
	}
	offset = (from_start && offset > 0) ? offset - 1 : offset;
	if (from_start)
		ft_putstr_fd(buf + offset, STDOUT_FILENO);
	else
		ft_putstr_fd(buf + buf_size - offset, STDOUT_FILENO);
}

void			ft_print_file(char *file, bool header_mode, bool from_start,
					int offset)
{
	int		ifd;
	char	*buf;

	if (ft_isdir(file))
	{
		if (header_mode)
			ft_print_header(file);
		ft_perror("tail", file);
		return ;
	}
	ifd = open(file, O_RDONLY);
	if (errno)
	{
		ft_perror("tail", file);
		return ;
	}
	if (header_mode)
		ft_print_header(file);
	ft_get_file(&buf, ifd);
	ft_print_file_tail(buf, from_start, offset);
	free(buf);
	close(ifd);
}
