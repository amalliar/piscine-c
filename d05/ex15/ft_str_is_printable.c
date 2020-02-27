/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:51:22 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:51:24 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isprint(int c)
{
	return (c > 0x1f && c != 0x7f);
}

int				ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_isprint(*str))
			return (0);
		str++;
	}
	return (1);
}
