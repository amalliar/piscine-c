/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:52:35 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:52:37 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*p_dest;

	p_dest = dest;
	if (nb == 0)
		return (p_dest);
	while (*dest)
		dest++;
	while (nb && (*dest++ = *src++))
		nb--;
	if (*--dest)
		*++dest = '\0';
	return (p_dest);
}
