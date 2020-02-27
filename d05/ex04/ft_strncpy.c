/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:44:09 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/03 18:44:13 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*p_dest;

	p_dest = dest;
	if (!n)
		return (p_dest);
	n++;
	while (--n && (*dest++ = *src++))
		;
	if ((dest - 1) && !*(dest - 1))
		n--;
	while (n--)
		*dest++ = '\0';
	return (p_dest);
}
