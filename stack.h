/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:00:31 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/27 00:02:13 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct node{
	int				data;
	int				order;
	struct node		*next;
}t_stack_node;

t_stack_node	*new_node(int data, int order);
int				is_empty(t_stack_node *root);
void			push(t_stack_node **root, int data, int order);
void			push_top(t_stack_node **root, int data, int order);
int				pop(t_stack_node **root);
int				peek(t_stack_node *root);
#endif