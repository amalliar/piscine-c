/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 09:27:48 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/11 10:34:53 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define DIV_BY_ZERO	"Stop : division by zero\n"
# define MOD_BY_ZERO	"Stop : modulo by zero\n"
# define USAGE			"0\n"
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

int				ft_atoi(char *str);
long			ft_calc(int a, int b, char *op);
long			ft_add(int a, int b);
long			ft_sub(int a, int b);
long			ft_mul(int a, int b);
long			ft_div(int a, int b);
long			ft_mod(int a, int b);
long			ft_usage(int a, int b);
int				ft_strcmp(char *s1, char *s2);
bool			ft_isdigit(char c);
bool			ft_isspace(char c);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);

typedef struct	s_opp
{
	char		*op;
	long		(*func)(int, int);
}				t_opp;

#endif
