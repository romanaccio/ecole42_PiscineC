/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 15:31:26 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/16 16:02:25 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	void *res;

	if (root == NULL)
		return (NULL);
	res = btree_search_item(root->left, data_ref, cmpf);
	if (res != NULL)
		return (res);
	if (cmpf(data_ref, root->item) == 0)
		return (root);
	res = btree_search_item(root->right, data_ref, cmpf);
	return (res);
}
