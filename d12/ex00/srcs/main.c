/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 00:58:15 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 02:47:10 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_disp_file.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (ft_print_err((argc < 2) ? ENOENT : E2BIG));
	return (ft_print_file(argv[1]));
}
