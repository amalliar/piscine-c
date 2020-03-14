/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 07:14:03 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/15 14:13:57 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stddef.h>

typedef struct	s_parser
{
	char		*string;
	unsigned	index;
}				t_parser;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			*ft_memcpy(void *dest, void *src, size_t num);
void			*ft_realloc(void *ptr, size_t size, size_t type_size);
void			ft_skip_whitespace(t_parser *self);
bool			ft_isspace(char c);
int				eval_expr(char *str);
int				ft_parse_expression(t_parser *self);
int				ft_atoi(char *str);
size_t			ft_strlen(char *str);
double			ft_parse_addition(t_parser *self);
double			ft_parse_multiplic(t_parser *self);
double			ft_calc_multiplic(double **values, size_t values_sz,
					size_t **modules, size_t modules_sz);
double			ft_parse_parenthesis(t_parser *self);
double			ft_parse_negative(t_parser *self);
double			ft_parse_number(t_parser *self);

#endif
