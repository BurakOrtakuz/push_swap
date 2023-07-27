/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:57:29 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/27 19:01:42 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_stack_node	*j;
	t_stack			*stack;
	int				digit_max;
	int				number;
	int				order;

	digit_max = 0;
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (ac == 2)
		av = ft_split(av[1], ' ');
	else
		av++;
	while (*av)
	{
		order = 0;
		number = ft_atoi(*av);
		digit_max++;
		j = stack->head_a;
		while (j)
		{
			if (j->data == number)
				error(stack);
			else if (number < j->data)
				j->order++;
			else 
				order++;
			j = j->next;
		}
		push_top(&stack->head_a, number, order);
		av++;
	}
	//print_all(stack, -1);
	if(digit_max < 45)
	{
		sort_selection(stack, digit_max);
	}
	else
	{
		digit_max = digit_calculate(digit_max);
		push_swap(stack, digit_max);
	}
	//printf("%d",r_or_rr(stack->head_a, 10));
	//print_all(stack, -1);
}
