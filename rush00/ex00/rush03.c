/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 22:58:48 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/02 02:06:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static void		ft_print_line(char beg, char mid, char end, int size)
{
	ft_putchar(beg);
	size--;
	while (size > 1)
	{
		ft_putchar(mid);
		size--;
	}
	if (size > 0)
		ft_putchar(end);
	ft_putchar('\n');
}

void			rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_print_line('A', 'B', 'C', x);
	y--;
	while (y > 1)
	{
		ft_print_line('B', ' ', 'B', x);
		y--;
	}
	if (y > 0)
		ft_print_line('A', 'B', 'C', x);
}
