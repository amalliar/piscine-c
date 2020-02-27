/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:44:09 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/04 14:57:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int		ft_strlen(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str)
		str++;
	return (str - p_str);
}

unsigned int			ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	size--;
	while (size && (*dest++ = *src++))
		size--;
	*dest = '\0';
	return (src_len);
}
