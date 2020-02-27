/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:55:17 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 23:21:20 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

static bool			ft_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (true);
		charset++;
	}
	return (false);
}

static unsigned		ft_count_words(char *str, char *charset)
{
	unsigned	count;

	count = 0;
	while (*str)
	{
		while (ft_is_separator(*str, charset))
			str++;
		if (*str)
		{
			count++;
			while (!ft_is_separator(*str, charset) && *str)
				str++;
		}
		else
			return (count);
	}
	return (count);
}

static unsigned		ft_get_word_len(char *str, char *charset)
{
	char	*p_str;

	p_str = str;
	while (!ft_is_separator(*str, charset) && *str)
		str++;
	return (str - p_str);
}

static void			ft_get_word(char **buffer, unsigned idx, \
						char **str, char *charset)
{
	unsigned	word_len;
	unsigned	i;

	while (ft_is_separator(**str, charset))
		++*str;
	word_len = ft_get_word_len(*str, charset);
	buffer[idx] = (char *)malloc((word_len + 1) * sizeof(char));
	buffer[idx][word_len] = '\0';
	i = 0;
	while (i < word_len)
	{
		buffer[idx][i++] = **str;
		++*str;
	}
}

char				**ft_split(char *str, char *charset)
{
	char		**result;
	unsigned	word_count;
	unsigned	i;

	if (!str)
		return (NULL);
	word_count = ft_count_words(str, charset);
	if (!(result = (char **)malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	result[word_count] = NULL;
	i = 0;
	while (i < word_count)
		ft_get_word(result, i++, &str, charset);
	return (result);
}
