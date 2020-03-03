/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 22:31:22 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/06 22:31:53 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;

	i = 0;
	while (factory[i])
	{
		j = 0;
		while (factory[i][j])
			free(factory[i][j++]);
		free(factory[i++]);
	}
	free(factory);
}
