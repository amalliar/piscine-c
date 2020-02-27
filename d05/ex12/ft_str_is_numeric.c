/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:49:41 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:49:43 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int				ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
