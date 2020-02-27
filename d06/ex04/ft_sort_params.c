/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:39:40 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/05 23:03:05 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);

static int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

static void		ft_swap(char **arr, int first, int second)
{
	char	*tmp;

	tmp = arr[first];
	arr[first] = arr[second];
	arr[second] = tmp;
}

static void		ft_puts(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

static void		ft_qsort(char **arr, int left, int right)
{
	int		i;
	int		last;

	if (left >= right)
		return ;
	ft_swap(arr, left, (left + right) / 2);
	last = left;
	i = left + 1;
	while (i <= right)
	{
		if (ft_strcmp(arr[i], arr[left]) < 0)
			ft_swap(arr, i, ++last);
		i++;
	}
	ft_swap(arr, left, last);
	ft_qsort(arr, left, last - 1);
	ft_qsort(arr, last + 1, right);
}

int				main(int argc, char **argv)
{
	int		i;

	ft_qsort(argv, 1, argc - 1);
	i = 1;
	while (i < argc)
		ft_puts(argv[i++]);
	return (0);
}
