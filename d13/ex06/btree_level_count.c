/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:01:05 by amalliar          #+#    #+#             */
/*   Updated: 2020/02/13 15:13:59 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int		left_branch;
	int		right_branch;

	if (!root)
		return (-1);
	left_branch = btree_level_count(root->left) + 1;
	right_branch = btree_level_count(root->right) + 1;
	return ((left_branch > right_branch) ? left_branch : right_branch);
}
