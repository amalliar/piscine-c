/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filecopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 04:24:47 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 05:04:55 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_disp_file.h"

int		ft_filecopy(int ifd, int ofd)
{
	int ret;
	int c;

	while ((ret = read(ifd, &c, 1)))
	{
		if (ret == -1)
			return (ft_print_err(RFAIL));
		write(ofd, &c, 1);
	}
	return (ret);
}
