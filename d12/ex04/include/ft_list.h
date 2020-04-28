/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:31:33 by amalliar          #+#    #+#             */
/*   Updated: 2020/04/27 11:44:17 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <stddef.h>

typedef struct		s_list
{
	struct s_list	*next;
	struct s_list	*prev;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);
t_list				*ft_list_last(t_list *begin_list);
void				ft_list_clear(t_list **begin_list);
void				ft_list_push_front(t_list **begin_list, void *data);

#endif
