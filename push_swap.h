/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:20:29 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/12 11:21:46 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stack.h"

typedef struct s_stack
{
    stack_node  *head_a;
    stack_node  *head_b;
}t_stack;

void    print_all(t_stack *stack);

void    sa(t_stack *stack, int print);
void    sb(t_stack *stack, int print);
void    ss(t_stack *stack,	int print);

void    pa(t_stack *stack);
void    pb(t_stack *stack);

void    ra(t_stack *stack, int print);
void    rb(t_stack *stack, int print);
void    rr(t_stack *stack);

void    rra(t_stack *stack, int print);
void    rrb(t_stack *stack, int print);
void    rrr(t_stack *stack);

int     ft_atoi(const char *str);
void    ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
#endif