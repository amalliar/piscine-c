/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 21:00:40 by amalliar          #+#    #+#             */
/*   Updated: 2020/01/31 22:00:59 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		ft_swap(int *arr, int first, int second)
{
	int		tmp;

	tmp = arr[first];
	arr[first] = arr[second];
	arr[second] = tmp;
}

static void		ft_qsort(int *arr, int left, int right)
{
	int		last;
	int		i;

	if (left >= right)
		return ;
	ft_swap(arr, left, (left + right) / 2);
	last = left;
	i = left + 1;
	while (i <= right)
	{
		if (arr[i] < arr[left])
			ft_swap(arr, i, ++last);
		i++;
	}
	ft_swap(arr, left, last);
	ft_qsort(arr, left, last - 1);
	ft_qsort(arr, last + 1, right);
}

void			ft_sort_integer_table(int *tab, int size)
{
	ft_qsort(tab, 0, size - 1);
}
