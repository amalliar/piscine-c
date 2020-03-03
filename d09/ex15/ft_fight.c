/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 03:07:48 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 03:28:47 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, 1);
}

void	ft_fight(t_perso *attack, t_perso *defense, float damage)
{
	if (attack->life == 0.0)
		return ;
	ft_putstr(attack->name);
	if (damage == KICK)
		ft_putstr(" does a judo kick on ");
	else if (damage == PUNCH)
		ft_putstr(" does a judo punch on ");
	else if (damage == HEADBUTT)
		ft_putstr(" does a judo headbutt on ");
	ft_putstr(defense->name);
	ft_putstr(".\n");
	defense->life -= (damage > defense->life) ? defense->life : damage;
	if (defense->life == 0.0)
	{
		ft_putstr(defense->name);
		ft_putstr(" is dead.\n");
	}
}
