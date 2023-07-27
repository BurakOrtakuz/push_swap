/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:20:00 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/27 18:51:56 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

int	check_bits(int data, int digit)
{
	if ((data & digit) == digit)
	{
		return (1);
	}
	return (0);
}

int	len(t_stack_node *head)
{
	int	i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}

int	is_sorted(t_stack_node *head)
{
	int				temp_order;
	t_stack_node	*temp;

	temp_order = head->order - 1;
	temp = head;
	while (++temp_order == temp->order && temp->next)
		temp = temp->next;
	if (temp->next)
		return (0);
	return (1);
}

int	r_or_rr(t_stack_node *head, int order)
{
	t_stack_node	*temp;
	int				i;
	int				j;
	int				check;

	check = 0;
	i = 0;
	j = 0;
	temp = head;
	while (temp)
	{
		if (temp->order == order)
			check = 1;
		if (!check)
			i++;
		else
			j++;
		temp = temp->next;
	}
	if (i < j)
		return (i);
	else
		return (-j);
}
