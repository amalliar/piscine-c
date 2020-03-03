/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_fight.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 03:07:48 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 03:28:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_fight.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, 1);
}

void	ft_ultimate_fight(t_perso *attack, t_perso *defense, int attack_idx)
{
	if (attack->life == 0.0)
		return ;
	ft_putstr(attack->name);
	ft_putstr(" does ");
	ft_putstr(g_attack_tab[attack_idx].message);
	ft_putstr(" on ");
	ft_putstr(defense->name);
	ft_putstr(".\n");
	defense->life -= (g_attack_tab[attack_idx].damage > defense->life) ? \
		defense->life : g_attack_tab[attack_idx].damage;
	if (defense->life == 0.0)
	{
		ft_putstr(defense->name);
		ft_putstr(" is dead.\n");
	}
}
