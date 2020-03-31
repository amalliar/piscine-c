/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 00:58:15 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/19 16:12:35 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_strerror(int errnum)
{
	if (errnum == EACCES)
		return ("Permission denied");
	else if (errnum == EISDIR)
		return ("Is a directory");
	else if (errnum == ENOENT)
		return ("No such file or directory");
	else
		return ("");
}
