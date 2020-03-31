/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:40:43 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/11 08:00:45 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

static void		ft_print_nbr(char *p_buffer)
{
	while (*p_buffer)
		ft_putchar(*p_buffer++);
	ft_putchar('\n');
}

void			ft_putnbr(int nb)
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
		ft_putstr("0\n");
		return ;
	}
	else if (llnb < 0)
	{
		ft_putchar('-');
		llnb *= -1;
	}
	ft_split_nbr(llnb, &p_buffer);
	ft_print_nbr(p_buffer);
}
