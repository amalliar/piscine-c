/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:17:56 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 16:17:58 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

static void		ft_puts(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void			ft_generic(void)
{
	ft_puts("Tut tut ; Tut tut");
}
