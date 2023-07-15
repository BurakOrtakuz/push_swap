/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:52:05 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/15 00:12:15 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

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

void	push_swap(t_stack *stack, int max_digit)
{
	int				digit;
	t_stack_node	*temp;
	int				i;
	int				j;

	j = 0;
	i = 0;
	digit = 1;
	temp = stack->head_a;
	while (j <= max_digit)
	{
		while (i < len(stack->head_a))
		{
			if (!check_bits(temp->data, digit))
			{
				pb(stack);
			}
			else
			{
				ra(stack, 1);
			}
			i++;
		}
		while (stack->head_b)
		{
			pa(stack);
		}
		j++;
		digit *= 2;
	}
}

void	print_all(t_stack *stack)
{
	t_stack_node	*temp_a;
	t_stack_node	*temp_b;

	temp_a = stack->head_a;
	temp_b = stack->head_b;
	printf("  A                B\n-----            -----\n");
	while (temp_a || temp_b)
	{
		if (temp_a)
		{
			printf("%3d",temp_a->data);
			temp_a = temp_a->next;
		}
		else
		{
			printf("   ");
		}
		if (temp_b)
		{
			printf("%17d",temp_b->data);
			temp_b = temp_b->next;
		}
		printf("\n");
	}
	printf("\n");
}
