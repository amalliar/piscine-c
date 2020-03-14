/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:57:36 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 14:07:29 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	void	*item;

	if (!root)
		return (NULL);
	if ((item = btree_search_item(root->left, data_ref, cmpf)))
		return (item);
	if (!cmpf(root->item, data_ref))
		return (root->item);
	return (btree_search_item(root->right, data_ref, cmpf));
}
