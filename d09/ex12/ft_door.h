/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 04:08:33 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/07 04:42:18 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <stdbool.h>
# include <unistd.h>
# define EXIT_SUCCESS	0

enum					e_door_state
{
	OPEN,
	CLOSE
};

typedef bool			ft_bool;

typedef	struct			s_door
{
	ft_bool				state;
}						t_door;

void					ft_putstr(char *str);
void					open_door(t_door *door);
void					close_door(t_door *door);
ft_bool					is_door_open(t_door *door);
ft_bool					is_door_close(t_door *door);

# include "ft_door.c"
#endif
