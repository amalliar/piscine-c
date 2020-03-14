/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 00:58:15 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/13 12:33:41 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

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
