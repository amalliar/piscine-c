/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:56:55 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/12 23:08:45 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#include "ft_list.h"

void			ft_sorted_list_insert(t_list **begin_list,
					void *data, int (*cmp)());

void			ft_sorted_list_merge(t_list **begin_list1,
				t_list *begin_list2, int (*cmp)());

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
	int		arr1[5];
	int		arr2[10];
	t_list	*head1;
	t_list	*head2;

	head1 = NULL;
	head2 = NULL;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		arr1[i] = rand() % 101;
	for (int i = 0; i < 5; i++)
		ft_sorted_list_insert(&head1, arr1 + i, cmp);
	ft_list_print(head1);
	for (int i = 0; i < 10; i++)
		arr2[i] = rand() % 101;
	for (int i = 0; i < 10; i++)
		ft_sorted_list_insert(&head2, arr2 + i, cmp);
	ft_list_print(head2);
	printf(">>> Merging the lists...\n");
	ft_sorted_list_merge(&head1, head2, cmp);
	printf(">>> Merging finished!\n");
	ft_list_print(head1);
	return (0);
}
