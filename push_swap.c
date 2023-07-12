/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:52:05 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/12 09:59:56 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void    push_swap(int *data, int size)
{
}

void    print_all(t_stack *stack)
{
    stack_node  *temp_a;
    stack_node  *temp_b;

    temp_a = stack->head_a;
    temp_b = stack->head_b;
    printf("  A                B\n-----            -----\n");
    while(temp_a || temp_b)
    {
        if(temp_a)
        {
            printf("%3d",temp_a->data);
            temp_a = temp_a->next;
        }else{
            printf("   ");
        }
        if(temp_b)
        {
            printf("%17d",temp_b->data);
            temp_b = temp_b->next;
        }
        printf("\n");
    }
    printf("\n");
}