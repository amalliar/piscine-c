/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:54:13 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:54:45 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static int		ft_is_unique(char c, char *arr)
{
	while (*arr)
	{
		if (c == *arr)
			return (0);
		arr++;
	}
	return (1);
}

static int		ft_validate_base(char *base)
{
	char	*p_base;

	p_base = base;
	if (!*base || !*(base + 1))
		return (0);
	while (*base)
	{
		if (!(*base > 0x1f && *base != 0x7f && \
			*base != '+' && *base != '-'))
			return (0);
		if (!ft_is_unique(*base, base + 1))
			return (0);
		base++;
	}
	return (base - p_base);
}

static void		ft_print_nbr(long long llnbr, long long radix, char *base)
{
	char			buffer[64];
	unsigned long	idx;

	idx = 63;
	if (!llnbr)
		ft_putchar('0');
	while (llnbr)
	{
		buffer[idx--] = base[llnbr % radix];
		llnbr /= radix;
	}
	idx++;
	while (idx < 64)
	{
		ft_putchar(buffer[idx]);
		idx++;
	}
}

void			ft_putnbr_base(int nbr, char *base)
{
	long long	radix;
	long long	llnbr;

	radix = ft_validate_base(base);
	if (!radix)
		return ;
	llnbr = nbr;
	if (llnbr < 0)
	{
		ft_putchar('-');
		llnbr *= -1;
	}
	ft_print_nbr(llnbr, radix, base);
}
