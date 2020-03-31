/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 15:03:01 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/23 04:15:35 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

bool	ft_isdir(char *file)
{
	int		fd;
	bool	isdir;

	fd = open(file, O_RDWR);
	isdir = (errno == EISDIR);
	if (!isdir)
		close(fd);
	return (isdir);
}

void	ft_build_buffer(char *file, char **buffer, size_t *buf_size)
{
	char		*ptr;
	int			ifd;
	int			ret;
	
	ifd = (!ft_strcmp(file, "STDIN")) ? STDIN_FILENO : open(file, O_RDONLY);
	if (errno || ft_isdir(file))
	{
		ft_perror("hexdump", file);
		return ;
	}
	*buffer = (char *)ft_realloc(*buffer, *buf_size, *buf_size + 4096);
	ptr = *buffer + *buf_size;
	*buf_size += 4096;
	while ((ret = read(ifd, ptr, 4096)))
	{
		if (ret < 4096)
			break ;
		else
		{
			*buffer = (char *)ft_realloc(*buffer, *buf_size, *buf_size + 4096);
			ptr = *buffer + *buf_size;
			*ptr = '\0';
			*buf_size += 4096;
		}
	}
	*buffer = (char *)ft_realloc(*buffer, *buf_size, *buf_size - 4096 + ret);
	*buf_size = *buf_size - 4096 + ret;
}
