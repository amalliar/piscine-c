/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:33:05 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/04 16:34:01 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static void		ft_puts(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int				main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	while (i > 0)
		ft_puts(argv[i--]);
	return (0);
}
