/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:52:05 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/27 02:23:48 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	stack_b_emptyier(t_stack *stack,  int digit)
{
	int				i;
	int				j;
	t_stack_node	*temp;

	temp = stack->head_b;
	i = 0;
	while (temp)
	{
		if (temp->data >= digit)
		{
			j = i + 1;
			while (--j > 0 && temp->next)
				rb(stack, 1);
			pa(stack);
			if (!stack->head_b)
				break ;
			j = i + 1;
			while (--j > 0 && temp->next)
				rrb(stack, 1);
			temp = stack->head_b;
		}
		else
			temp = temp->next;
		i++;
	}
}

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
	int				i;
	int				j;
	int				lenght;

	j = 1;
	digit = 1;
	while (j <= max_digit)
	{
		i = 0;
		lenght = len(stack->head_a);
		while (i < lenght)
		{
			if (!check_bits(stack->head_a->order, digit))
			{
				pb(stack);
			}
			else if (stack->head_a->next)
				ra(stack, 1);
			i++;
		}
		i = 0;
		lenght = len(stack->head_b);
		while (i < lenght)
		{
			if (check_bits(stack->head_b->order, digit * 2))
				pa(stack);
			else if(stack->head_b->next)
				rb(stack,1);
			i++;
		}
		//stack_b_emptyier(stack,j);
		j++;
		digit *= 2;
	}
	while (stack->head_b)
		pa(stack);
}

void	print_all(t_stack *stack, int digit)
{
	t_stack_node	*temp_a;
	t_stack_node	*temp_b;

	temp_a = stack->head_a;
	temp_b = stack->head_b;
	printf("  A                B\n-----            -----\n");
	if (temp_a && digit > 0)
	{
		printBits(sizeof(int), &temp_a->data);
		printf(" %d %d\n",temp_a->data, check_bits(temp_a->data, digit));
	}

	while (temp_a || temp_b)
	{
		if (temp_a)
		{
			printf("%3d %3d",temp_a->data, temp_a->order);		
			temp_a = temp_a->next;
		}
		else
		{
			printf("   ");
		}
		if (temp_b)
		{
			printf("%17d %3d",temp_b->data, temp_b->order);
			temp_b = temp_b->next;
		}
		printf("\n");
	}
	printf("\n");
}
