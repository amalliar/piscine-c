/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:50:22 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:50:23 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int				ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_islower(*str))
			return (0);
		str++;
	}
	return (1);
}
