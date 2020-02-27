/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 05:24:36 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 05:24:41 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);
char			**ft_split_whitespaces(char *str);

static void		ft_puts(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void			ft_print_words_tables(char **tab)
{
	while (*tab)
		ft_puts(*tab++);
}
