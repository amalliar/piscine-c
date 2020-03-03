/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_fight.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 03:07:48 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 03:28:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ULTIMATE_FIGHT_H
# define FT_ULTIMATE_FIGHT_H
# include <unistd.h>
# include "ft_perso.h"

typedef struct				s_attack
{
	float					damage;
	char					*message;
}							t_attack;

static const t_attack		g_attack_tab[] = 
{
	{15.0, "a judo kick"},
	{13.0, "un judo chop ichi"},
	{3.0, "un judo chop ni"},
	{18.0, "un judo chop san"},
	{9.0, "un judo chop shi"},
	{11.0, "un judo chop go"},
	{13.0, "un judo chop roku"},
	{8.0, "un judo chop shichi"},
	{6.0, "un judo chop hachi"},
	{11.0, "un judo chop ku"},
	{9.0, "un judo chop ju"},
	{18.0, "un judo chop hyaku"},
	{10.0, "un judo chop sen"},
	{5.0, "a judo punch"},
	{20.0, "a judo headbutt"}
};

enum						e_attacks
{
	KICK,
	KICK1,
	KICK2,
	KICK3,
	KICK4,
	KICK5,
	KICK6,
	KICK7,
	KICK8,
	KICK9,
	KICK10,
	KICK11,
	KICK12,
	PUNCH,
	HEADBUTT
};

void						ft_ultimate_fight(t_perso *attack, t_perso *defense, int attack_idx);

#endif
