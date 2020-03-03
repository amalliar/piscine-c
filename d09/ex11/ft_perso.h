/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 03:07:48 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 03:28:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD		42
# include <string.h>

typedef struct				s_perso
{
	char					*name;
	float					life;
	short					age;
	short					profession;
}							t_perso;

#endif
