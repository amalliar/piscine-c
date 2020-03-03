/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 10:15:34 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 10:36:13 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned		ft_strlen(char *str)
{
	char	*p_str;

	p_str = str;
	while (*p_str)
		p_str++;
	return (p_str - str);
}

static unsigned		ft_get_tab_words(char **tab)
{
	char	**p_tab;

	p_tab = tab;
	while (*p_tab)
		p_tab++;
	return (p_tab - tab);
}

static unsigned		ft_get_tab_chars(char **tab)
{
	unsigned	size;

	size = 0;
	while (*tab)
	{
		size += ft_strlen(*tab);
		tab++;
	}
	return (size);
}

static char			*ft_strcat(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return (p_dest);
}

char				*ft_join(char **tab, char *sep)
{
	char		*result;
	unsigned	tab_words;
	unsigned	tab_chars;
	unsigned	sep_chars;

	tab_words = ft_get_tab_words(tab);
	tab_chars = ft_get_tab_chars(tab);
	sep_chars = ft_strlen(sep);
	result = (char *)malloc(tab_chars + sep_chars * tab_words + 1);
	result[0] = '\0';
	while (*tab && *(tab + 1))
	{
		ft_strcat(result, *tab);
		ft_strcat(result, sep);
		tab++;
	}
	if (*tab)
		ft_strcat(result, *tab);
	return (result);
}
