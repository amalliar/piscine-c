/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 04:05:37 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/26 09:28:41 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"

static void		ft_alloc(t_perso ***tab, char *str)
{
	int		size;

	size = 0;
	while (*str)
	{
		if (*str == '|')
			size++;
		str++;
	}
	*tab = (t_perso **)malloc((size + 1) * sizeof(t_perso *));
	(*tab)[size] = 0;
	while (--size >= 0)
		(*tab)[size] = (t_perso *)malloc(sizeof(t_perso));
}

static char		*ft_strsdup(char *str, char sep)
{
	char	*pstr;
	char	*new;

	pstr = str;
	while (*pstr && *pstr != sep)
		pstr++;
	pstr = (char *)malloc((pstr - str + 1) * sizeof(char));
	new = pstr;
	while (*str && *str != sep)
		*pstr++ = *str++;
	*pstr = '\0';
	return (new);
}

static void		ft_init(t_perso **tab, char *str)
{
	int		idx;

	idx = 0;
	while (tab[idx])
	{
		tab[idx]->age = 0;
		while (*str >= '0' && *str <= '9')
			tab[idx]->age = tab[idx]->age * 10 + *str++ - '0';
		str += (*str) ? 1 : 0;
		tab[idx]->name = ft_strsdup(str, ';');
		while (*str && *str != ';')
			str++;
		str += (*str) ? 1 : 0;
		idx++;
	}
}

t_perso			**ft_decrypt(char *str)
{
	t_perso		**tab;

	ft_alloc(&tab, str);
	ft_init(tab, str);
	return (tab);
}
