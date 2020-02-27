/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:53:02 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/04 05:02:13 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int		ft_strlen(char *src)
{
	char	*p_src;

	p_src = src;
	while (*src)
		src++;
	return (src - p_src);
}

unsigned int			ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	copy_size;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	dest_len = (ft_strlen(dest) > size) ? size : ft_strlen(dest);
	if (dest_len != size)
	{
		copy_size = size - dest_len - 1;
		if (copy_size > src_len)
			copy_size = src_len;
		dest += dest_len;
		while (copy_size--)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (dest_len + src_len);
}
