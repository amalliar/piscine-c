/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:47:51 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:47:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

static int		ft_tolower(int c)
{
	return ((c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c);
}

static int		ft_toupper(int c)
{
	return ((c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c);
}

static void		ft_skip_junk(char **p)
{
	while (**p && !ft_isalnum(**p))
		++*p;
}

char			*ft_strcapitalize(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str)
	{
		ft_skip_junk(&str);
		*str = ft_toupper(*str);
		str++;
		while (*str && ft_isalnum(*str))
		{
			*str = ft_tolower(*str);
			str++;
		}
	}
	return (p_str);
}
