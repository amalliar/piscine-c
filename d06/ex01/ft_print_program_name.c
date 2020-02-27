/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:23:06 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/04 16:24:50 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	while (**argv)
	{
		ft_putchar(**argv);
		++*argv;
	}
	ft_putchar('\n');
	(void)argc;
	return (0);
}
