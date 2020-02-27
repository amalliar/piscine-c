/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:45:40 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 23:08:07 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str)
		str++;
	return (str - p_str);
}

static char				*ft_strcpy(char *dest, const char *src)
{
	char	*p_dest;

	p_dest = dest;
	while ((*dest++ = *src++))
		;
	return (p_dest);
}

char					*ft_strdup(char *src)
{
	char	*dest;

	if (!(dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*arr;

	arr = (t_stock_par *)malloc((ac + 1) * sizeof(t_stock_par));
	arr[ac].str = NULL;
	i = 0;
	while (i < ac)
	{
		arr[i].size_param = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		arr[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (arr);
}
