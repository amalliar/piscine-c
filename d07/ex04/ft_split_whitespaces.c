/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 03:44:27 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 05:15:24 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

static bool			ft_is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\v' || c == '\n');
}

static unsigned		ft_count_words(char *str)
{
	unsigned	count;

	count = 0;
	while (*str)
	{
		while (ft_is_separator(*str))
			str++;
		if (*str)
		{
			count++;
			while (!ft_is_separator(*str) && *str)
				str++;
		}
		else
			return (count);
	}
	return (count);
}

static unsigned		ft_get_word_len(char *str)
{
	char	*p_str;

	p_str = str;
	while (!ft_is_separator(*str) && *str)
		str++;
	return (str - p_str);
}

static void			ft_get_word(char **buffer, unsigned idx, char **str)
{
	unsigned	word_len;
	unsigned	i;

	while (ft_is_separator(**str))
		++*str;
	word_len = ft_get_word_len(*str);
	buffer[idx] = (char *)malloc((word_len + 1) * sizeof(char));
	buffer[idx][word_len] = '\0';
	i = 0;
	while (i < word_len)
	{
		buffer[idx][i++] = **str;
		++*str;
	}
}

char				**ft_split_whitespaces(char *str)
{
	char		**result;
	unsigned	word_count;
	unsigned	i;

	if (!str)
		return (NULL);
	word_count = ft_count_words(str);
	if (!(result = (char **)malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	result[word_count] = NULL;
	i = 0;
	while (i < word_count)
		ft_get_word(result, i++, &str);
	return (result);
}
