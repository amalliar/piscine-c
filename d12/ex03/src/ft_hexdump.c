/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 15:45:33 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/23 16:15:29 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static void		ft_print_plaintext(unsigned char *buffer, size_t size)
{
	if (!buffer || !size)
		return ;
	ft_putstr_fd("|", STDOUT_FILENO);
	while (size--)
	{
		ft_putchar((ft_isprint(*buffer)) ? *buffer : '.');
		buffer++;
	}
	ft_putstr_fd("|", STDOUT_FILENO);
}

static void		ft_print_default(void *addr, size_t size, size_t offset)
{
	unsigned short	value;
	size_t			limit;

	ft_putnbr_hex(offset, 7);
	value = 0;
	limit = offset + 16;
	while (offset < limit)
	{
		if (offset < size)
			if (offset + 1 < size)
				value = *((unsigned short*)addr + offset / 2);
			else
				value = *((unsigned char*)addr + offset);
		else
		{
			ft_putnchar(' ', (limit - offset) / 2 * 5);
			break ;
		}
		ft_putstr_fd(" ", STDOUT_FILENO);
		ft_putnbr_hex(value, 4);
		offset += 2;
	}
	ft_putchar('\n');
}

static void		ft_print_canonical(void *addr, size_t size, size_t offset)
{
	size_t		limit;

	ft_putnbr_hex(offset, 8);
	limit = offset + 16;
	while (offset < limit)
	{
		if (offset < size)
		{
			ft_putstr_fd(((limit - offset) % 8) ? " " : "  ", STDOUT_FILENO);
			ft_putnbr_hex(*((unsigned char*)addr + offset), 2);
		}
		else
		{
			ft_putnchar(' ', (limit - offset) * 3);
			ft_putstr_fd((limit - offset < 8) ? "" : " ", STDOUT_FILENO);
			break ;
		}
		offset++;
	}
	ft_putstr_fd("  ", STDOUT_FILENO);
	ft_print_plaintext(addr + limit - 16, 16 - (limit - offset));
	ft_putchar('\n');
}

static void		ft_print_hexdump(void *addr, size_t size, size_t offset, int format)
{
	if (format == CANONICAL)
		ft_print_canonical(addr, size, offset);
	else
		ft_print_default(addr, size, offset);
}

void			ft_hexdump(void *addr, size_t size, int format)
{
	size_t		i;
	int			state;

	if (!addr || !size)
		return ;
	ft_print_hexdump(addr, size, 0, format);
	state = UNIQUE;
	i = 16;
	while (i < size)
	{
		if (!ft_memcmp(addr + i, addr + i - 16, 16))
		{
			if (state == UNIQUE)
				ft_putstr_fd("*\n", STDOUT_FILENO);
			state = REPEAT;
		}
		else
		{
			ft_print_hexdump(addr, size, i, format);
			state = UNIQUE;
		}
		i += 16;
	}
	ft_putnbr_hex(size, (format == CANONICAL) ? 8 : 7);
	ft_putchar('\n');
}
