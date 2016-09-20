/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 18:17:15 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/15 18:30:00 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *p;

	p = malloc(sizeof(t_btree));
	if (p)
	{
		p->left = NULL;
		p->right = NULL;
		p->item = item;
	}
	return (p);
}
