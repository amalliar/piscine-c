/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 04:05:37 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 04:37:17 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		ft_swap(char **p1, char **p2)
{
	char	*tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

static int		ft_tab_size(char **tab)
{
	int		size;

	size = 0;
	while (*tab++)
		size++;
	return (size);
}

int				ft_compact(char **tab, int length)
{
	int		i;
	int		j;

	i = 0;
	while (i < length)
	{
		if (!tab[i])
		{
			j = i + 1;
			while (j < length)
			{
				if (tab[j])
				{
					ft_swap(tab + i, tab + j);
					break ;
				}
				j++;
			}
		}
		i++;
	}
	return (ft_tab_size(tab));
}
