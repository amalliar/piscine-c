/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:57:29 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/04 06:09:40 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static void		ft_flush(unsigned char buffer[16], unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar((buffer[i] >= 0x20 && buffer[i] <= 0x7e) ? buffer[i] : '.');
		i++;
	}
	ft_putchar('\n');
}

static void		ft_print_offset(unsigned int i)
{
	int				j;
	unsigned int	buffer[8];

	j = 7;
	while (j >= 0)
	{
		buffer[j] = i % 16;
		i /= 16;
		j--;
	}
	j = 0;
	while (j < 8)
	{
		ft_putchar("0123456789abcdef"[buffer[j]]);
		j++;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

static void		ft_print_char_hex(unsigned char *p_addr, unsigned int i)
{
	unsigned int	c;

	c = *(p_addr + i);
	ft_putchar("0123456789abcdef"[c / 16 % 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
	if (i % 16 % 2)
		ft_putchar(' ');
}

static void		ft_pad_last_line(unsigned int i)
{
	unsigned int	j;
	unsigned int	n_spaces;

	if (i == 0)
		return ;
	j = 0;
	while (j < i)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		j++;
	}
	n_spaces = (i % 2) ? i / 2 + 1 : i / 2;
	j = 0;
	while (j < n_spaces)
	{
		ft_putchar(' ');
		j++;
	}
}

void			*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*p_addr;
	unsigned char	buffer[16];
	unsigned int	i;

	if (!addr || !size)
		return (addr);
	p_addr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			if (i > 0)
				ft_flush(buffer, 16);
			ft_print_offset(i);
		}
		ft_print_char_hex(p_addr, i);
		buffer[i % 16] = *(p_addr + i);
		i++;
	}
	i--;
	ft_pad_last_line(16 - (i % 16 + 1));
	ft_flush(buffer, i % 16 + 1);
	return (addr);
}
