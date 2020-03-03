/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 06:13:53 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/11 06:38:15 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **base, size_t i, size_t j)
{
	char	*tmp;

	tmp = base[i];
	base[i] = base[j];
	base[j] = tmp;
}

void	ft_bsort(char **base, size_t num,
		int (*compar)(char *, char *))
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < num)
	{
		j = i + 1;
		while (j < num)
		{
			if (compar(base[i], base[j]) > 0)
				ft_swap(base, i, j);
			j++;
		}
		i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	size_t	num;
	char	**ptr;

	if (!tab || !*tab)
		return ;
	ptr = tab;
	while (*ptr)
		ptr++;
	num = ptr - tab;
	ft_bsort(tab, num, ft_strcmp);
}
