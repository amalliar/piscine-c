/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:17:25 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/14 17:41:11 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int ac, char **av)
{
	t_map		*map;
	int			i;

	if (ac < 2)
	{
		map = ft_gen_map("STDIN");
		if (map)
			ft_process_map(map);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		map = ft_gen_map(av[i]);
		if (map)
			ft_process_map(map);
		i++;
		if (i < ac)
			write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
