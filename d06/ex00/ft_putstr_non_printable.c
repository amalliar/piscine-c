/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:55:58 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/04 06:02:01 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static void		ft_print_hex(unsigned char c)
{
	ft_putchar("0123456789abcdef"[c / 16 % 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
}

void			ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 0x20 && *str <= 0x7e)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_print_hex(*str);
		}
		str++;
	}
}
