/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 23:14:25 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 23:38:02 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void			ft_puts(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

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
		ft_puts("0");
		return ;
	}
	else if (llnb < 0)
	{
		ft_putchar('-');
		llnb *= -1;
	}
	ft_split_nbr(llnb, &p_buffer);
	ft_puts(p_buffer);
}

void			ft_show_tab(struct s_stock_par *par)
{
	int		i;

	while (par->str)
	{
		ft_puts(par->copy);
		ft_putnbr(par->size_param);
		i = 0;
		while ((par->tab)[i])
			ft_puts((par->tab)[i++]);
		par++;
	}
}
