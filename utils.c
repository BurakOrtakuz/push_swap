/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:17:20 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/27 16:26:40 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"
#include "stack.h"

int	ft_atoi(const char *str)
{
	int	signature;
	int	number;

	number = 0;
	signature = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signature = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += (*str - '0');
		str++;
	}
	number *= signature;
	return (number);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int	digit_calculate(int data)
{
	int	i;

	i = 0;
	while (data != 0)
	{
		data = data >> 1;
		i++;
	}
	return (i);
}

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
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