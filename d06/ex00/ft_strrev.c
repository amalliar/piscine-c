/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 19:22:41 by amalliar          #+#    #+#             */
/*   Updated: 2020/01/31 19:23:06 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_strlen(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str)
		str++;
	return (str - p_str);
}

char			*ft_strrev(char *str)
{
	char	*beg;
	char	*end;

	if (!str || !*str)
		return (str);
	beg = str;
	end = str + ft_strlen(str) - 1;
	while (beg < end)
	{
		*beg ^= *end;
		*end ^= *beg;
		*beg ^= *end;
		beg++;
		end--;
	}
	return (str);
}
