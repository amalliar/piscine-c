/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 03:07:48 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 03:28:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H
# include <unistd.h>
# include "ft_perso.h"

enum		e_attacks
{
	PUNCH = 5,
	KICK = 15,
	HEADBUTT = 20
};

void		ft_fight(t_perso *attack, t_perso *defense, float damage);

#endif
