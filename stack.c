/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:52:22 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/14 23:52:44 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

t_stack_node	*new_node(int data)
{
	t_stack_node	*node;

	node = (t_stack_node *)malloc(sizeof(t_stack_node));
	node->data = data;
	node->next = NULL;
	return (node);
}

int	is_empty(t_stack_node *root)
{
	return (!root);
}

void	push(t_stack_node **root, int data)
{
	t_stack_node	*node;

	node = new_node(data);
	node->next = *root;
	*root = node;
}

int	pop(t_stack_node **root)
{
	t_stack_node	*temp;
	int			popped;

	if (is_empty(*root))
		return (-1);
	temp = *root;
	*root = (*root)->next;
	popped = temp->data;
	free(temp);
	return (popped);
}

int	peek(t_stack_node *root)
{
	if (is_empty(root))
		return (-1);
	return (root->data);
}
