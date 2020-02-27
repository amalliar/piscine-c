/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:44:46 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:44:56 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	bool	is_found;

	i = 0;
	while (str[i] != '\0')
	{
		is_found = true;
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
			{
				is_found = false;
				break ;
			}
			j++;
		}
		if (is_found)
			return (str + i);
		i++;
	}
	return (NULL);
}
