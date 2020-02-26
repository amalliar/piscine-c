/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 02:06:44 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/04 15:05:58 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

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
		ft_putchar('0');
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
