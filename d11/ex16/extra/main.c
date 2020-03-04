/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:56:55 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 08:57:41 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#include "ft_list.h"

void		ft_sorted_list_insert(t_list **begin_list,
				void *data, int (*cmp)());

void		ft_list_print(t_list *list)
{
	printf("lst: {");
	while (list)
	{
		printf((list->next) ? "%d, " : "%d}\n", *(int *)list->data);
		list = list->next;
	}
}

int			cmp(void *p1, void *p2)
{
	return (*(int *)p1 - *(int *)p2);
}

int			main(void)
{
	int		arr[20];
	t_list	*head;

	head = NULL;
	srand(time(NULL));
	printf("arr: [");
	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 101;
		printf((i < 19) ? "%d, " : "%d]\n", arr[i]);
	}
	for (int i = 0; i < 20; i++)
		ft_sorted_list_insert(&head, arr + i, cmp);
	ft_list_print(head);
	return (0);
}
