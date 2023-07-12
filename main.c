/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:57:29 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/12 11:24:53 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "./libft/libft.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    int     i;
    t_stack *stack;

    stack = (t_stack*)malloc(sizeof(t_stack));
    i = 1;
    while(i < ac)
    {
        push(&stack->head_a,ft_atoi(av[i]));
        i++;
    }
    i = 0;
    print_all(stack);
    //while(i<10)
    {  
        ra(stack,1);
        print_all(stack);  
        i++;
    }
}
