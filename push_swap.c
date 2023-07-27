/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:52:05 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/27 18:32:05 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	stack_b_emptyier(t_stack *stack, int digit)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = len(stack->head_b);
	while (i < lenght)
	{
		if (check_bits(stack->head_b->order, digit * 2))
			pa(stack);
		else if (stack->head_b->next)
			rb(stack, 1);
		i++;
	}
}

void	push_swap(t_stack *stack, int max_digit)
{
	int				digit;
	int				i;
	int				j;
	int				lenght;

	j = 0;
	digit = 1;
	while (++j <= max_digit)
	{
		i = 0;
		lenght = len(stack->head_a);
		while (i < lenght)
		{
			if (!check_bits(stack->head_a->order, digit))
				pb(stack);
			else if (stack->head_a->next)
				ra(stack, 1);
			i++;
		}
		stack_b_emptyier(stack, digit);
		digit *= 2;
	}
	while (stack->head_b)
		pa(stack);
}

void	sort_selection(t_stack *stack, int lenght)
{
	int				i;

	i = 0;
	while (i < lenght - 1)
	{
		if (selection_helper(stack, r_or_rr(stack->head_a, i)) < 0)
			break ;
		i++;
	}
	while (stack->head_b)
		pa(stack);
}

int	selection_helper(t_stack *stack, int i)
{
	if (i < 0)
	{
		while (i != 0)
		{
			rra(stack, 1);
			i++;
		}
		if (is_sorted(stack->head_a))
			return (0);
		pb(stack);
	}
	else
	{
		while (i != 0)
		{
			printf("%d",i);
			ra(stack, 1);
			i--;
		}
		if (is_sorted(stack->head_a))
			return (0);
		pb(stack);
	}
	return (1);
}
