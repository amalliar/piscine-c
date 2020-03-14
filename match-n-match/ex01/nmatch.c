/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 03:51:14 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/09 21:43:24 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	char	*ptr;
	int		count;

	if (!*s2)
		return ((*s1) ? 0 : 1);
	if (*s2 == '*')
	{
		ptr = s1;
		count = 0;
		while (*ptr)
		{
			count += nmatch(ptr, s2 + 1);
			ptr++;
		}
		count += nmatch(ptr, s2 + 1);
		return (count);
	}
	if (!*s1)
		return (0);
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else
		return (0);
}
