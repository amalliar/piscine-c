/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 23:50:02 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 00:37:45 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <stdbool.h>

static char		*ft_strtolower(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
		str++;
	}
	return (p_str);
}

static void		ft_skip_whitespace(char **str)
{
	while ((**str >= '\t' && **str <= '\r') || **str == ' ')
		++*str;
}

static int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (--n && (*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

static bool		ft_check_alert(char *str)
{
	ft_skip_whitespace(&str);
	if (!ft_strncmp(str, "president", 9))
	{
		str += 9;
		ft_skip_whitespace(&str);
		return (!*str);
	}
	if (!ft_strncmp(str, "attack", 6))
	{
		str += 6;
		ft_skip_whitespace(&str);
		return (!*str);
	}
	if (!ft_strncmp(str, "bauer", 5))
	{
		str += 5;
		ft_skip_whitespace(&str);
		return (!*str);
	}
	return (false);
}

int				main(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		ft_strtolower(av[i]);
		if (ft_check_alert(av[i]))
		{
			write(STDOUT_FILENO, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
