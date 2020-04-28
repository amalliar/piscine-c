/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:40:43 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/28 10:44:21 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"

static void		ft_split_nbr(long long llnb, char **p_buffer)
{
	while (llnb)
	{
		**p_buffer = llnb % 10 + '0';
		--*p_buffer;
		llnb /= 10;
	}
	++*p_buffer;
}

static void		ft_print_nbr(char *p_buffer, size_t padding)
{
	size_t	buf_size;

	buf_size = ft_strlen(p_buffer);
	if (buf_size > padding)
		padding = 0;
	else
		padding -= buf_size;
	while (padding--)
		ft_putchar('0');
	while (*p_buffer)
		ft_putchar(*p_buffer++);
}

void			ft_putnbr(int nb, size_t padding)
{
	long long	llnb;
	char		buffer[16];
	char		*p_buffer;

	llnb = nb;
	p_buffer = buffer;
	p_buffer[15] = '\0';
	p_buffer += 14;
	if (llnb == 0)
	{
		while (padding--)
			ft_putchar('0');
		return ;
	}
	else if (llnb < 0)
	{
		ft_putchar('-');
		llnb *= -1;
	}
	ft_split_nbr(llnb, &p_buffer);
	ft_print_nbr(p_buffer, padding);
}
