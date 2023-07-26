/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burak <burak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:57:29 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/26 14:29:35 by burak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	/*
	while(*++av)
	{
		int number = ft_atoi(*av);
		printf(" %d\n", biggest_bit(number));	
	}
	*/
	t_stack_node	*j;
	t_stack			*stack;
	int				digit_max;

	digit_max = 0;
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (ac == 2)
		av = ft_split(av[1], ' ');
	else
		av++;
	while (*av)
	{
		if (digit_max < digit_calculate(ft_atoi(*av)))
			digit_max = digit_calculate(ft_atoi(*av));
		j = stack->head_a;
		while (j)
		{
			if (j->data == ft_atoi(*av))
				error(stack);
			j = j->next;
		}
		push(&stack->head_a, ft_atoi(*av));
		av++;
	}
	//print_all(stack, -1);
	push_swap(stack, digit_max);
	//print_all(stack, -1);
}
