/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:13:35 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 13:16:54 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	node->left = NULL;
	node->right = NULL;
	node->item = item;
	return (node);
}
