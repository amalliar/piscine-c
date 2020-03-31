/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:09:20 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/19 22:13:32 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdbool.h>
# include <stddef.h>

typedef struct		s_map
{
	int				rows;
	int				cols;
	char			empty;
	char			obstacle;
	char			full;
	unsigned short	**m_matrix;
	unsigned short	m_square_sz;
	int				m_square_i;
	int				m_square_j;
}					t_map;

int					ft_atoi(char *str);
int					ft_get_first_line(t_map *map, int ifd);
int					ft_get_line(t_map *map, int i, int ifd);
int					ft_get_m_matrix(t_map *map, int ifd);
int					ft_get_map_info(t_map *map, int ifd);
int					ft_strcmp(char *s1, char *s2);
void				ft_free_map(t_map *map);
void				ft_get_s_matrix(t_map *map);
void				*ft_memcpy(void *dest, void *src, size_t num);
void				ft_process_map(t_map *map);
void				*ft_realloc(void *ptr, size_t old_size, size_t new_size);
t_map				*ft_gen_map(char *file);
t_map				*ft_map_error(void);

#endif
