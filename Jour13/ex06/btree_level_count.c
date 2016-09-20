/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:11:49 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/16 16:22:13 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int res;
	int left;
	int right;

	if (root == NULL)
		return (0);
	res = 1;
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	if (left > right)
		res += left;
	else
		res += right;
	return (res);
}
