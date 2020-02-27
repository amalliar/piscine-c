/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:50:50 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:50:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int				ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_isupper(*str))
			return (0);
		str++;
	}
	return (1);
}
