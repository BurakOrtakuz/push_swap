/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burak <burak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:52:05 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/15 21:26:36 by burak            ###   ########.fr       */
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
	int				lenght;

	j = 1;
	digit = 1;
	while (j <= max_digit * 4)
	{
		i = 0;
		lenght = len(stack->head_a);
		while (i < lenght)
		{
			if (!check_bits(stack->head_a->data, digit))
			{
				pb(stack);
			}
			else
			{
				if (stack->head_a->next)
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

void	print_all(t_stack *stack, int digit)
{
	t_stack_node	*temp_a;
	t_stack_node	*temp_b;

	temp_a = stack->head_a;
	temp_b = stack->head_b;
	printf("  A                B\n-----            -----\n");
	if (temp_a)
	{
		printBits(sizeof(int), &temp_a->data);
		if (digit > 0)
			printf(" %d %d\n",temp_a->data, check_bits(temp_a->data, digit));
	}

	while (temp_a || temp_b)
	{
		if (temp_a)
		{
			printf("%3d ",temp_a->data);		
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
