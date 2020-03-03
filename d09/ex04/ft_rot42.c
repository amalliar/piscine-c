/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:53:15 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 19:58:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static bool		ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

static bool		ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

static bool		ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char			*ft_rot42(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str)
	{
		if (ft_isalpha(*str))
		{
			if (ft_islower(*str))
				*str = (*str - 'a' + 16) % 26 + 'a';
			else if (ft_isupper(*str))
				*str = (*str - 'A' + 16) % 26 + 'A';
		}
		str++;
	}
	return (p_str);
}
