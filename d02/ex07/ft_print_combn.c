/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 05:39:32 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/04 15:06:11 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static void		ft_print_nb(char buffer[], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(buffer[i] + '0');
		i++;
	}
}

/*
** Search for the first digit that is not maxed out,
** increment it, after that, make every next digit
** be previous digit plus one.
*/

static void		ft_inc_nb(char buffer[], int n)
{
	int		i;

	i = n - 1;
	while (i > 0 && buffer[i] == 10 - n + i)
		i--;
	buffer[i]++;
	while (i < n - 1)
	{
		buffer[i + 1] = buffer[i] + 1;
		i++;
	}
}

/*
** Last digit overflows first.
*/

static int		ft_check_valid(char buffer[], int n)
{
	return (buffer[n - 1] <= 9);
}

void			ft_print_combn(int n)
{
	char	buffer[10];
	int		i;

	if (n < 1 || n > 9)
		return ;
	i = 0;
	while (i < n)
	{
		buffer[i] = i;
		i++;
	}
	ft_print_nb(buffer, n);
	ft_inc_nb(buffer, n);
	while (ft_check_valid(buffer, n))
	{
		ft_putchar(',');
		ft_putchar(' ');
		ft_print_nb(buffer, n);
		ft_inc_nb(buffer, n);
	}
}
