/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 23:58:25 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 05:12:12 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	const char	*p_str;

	p_str = str;
	while (*str)
		str++;
	return (str - p_str);
}

static char		*ft_strcpy(char *dest, const char *src)
{
	char	*p_dest;

	p_dest = dest;
	while ((*dest++ = *src++))
		;
	return (p_dest);
}

char			*ft_strdup(char *src)
{
	char	*dest;

	if (!(dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
