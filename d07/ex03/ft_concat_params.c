/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 01:29:35 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 05:14:23 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str)
		str++;
	return (str - p_str);
}

static char		*ft_strcat(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return (p_dest);
}

static void		ft_norm_sux(int argc, char **argv, int *size)
{
	int		i;

	i = 1;
	while (i < argc)
		*size += ft_strlen(argv[i++]);
}

char			*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		buff_size;

	buff_size = argc - 1;
	if (!buff_size)
	{
		if (!(str = (char *)malloc(1 * sizeof(char))))
			return (NULL);
		*str = '\0';
		return (str);
	}
	ft_norm_sux(argc, argv, &buff_size);
	if (!(str = (char *)malloc((buff_size + 1) * sizeof(char))))
		return (NULL);
	*str = '\0';
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i++]);
		ft_strcat(str, "\n");
	}
	str[ft_strlen(str) - 1] = '\0';
	return (str);
}
