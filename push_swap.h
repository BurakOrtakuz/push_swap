/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bortakuz <bortakuz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:20:29 by bortakuz          #+#    #+#             */
/*   Updated: 2023/07/28 02:03:37 by bortakuz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stack.h"
# include <stdio.h>

typedef struct s_stack
{
	t_stack_node	*head_a;
	t_stack_node	*head_b;
}t_stack;

int		check_bits(int data, int digit);
void	push_swap(t_stack *stack, int max_digit);
void	error(t_stack *stack);
void	printBits(size_t const size, void const *const ptr);
void	stack_b_emptyier(t_stack *stack, int digit);
int		len(t_stack_node *head);
int		r_or_rr(t_stack_node *head, int order);
void	sort_selection(t_stack *stack, int lenght);
int		selection_helper(t_stack *stack, int i);
void	small_sort(t_stack *stack);
int		is_sorted(t_stack_node *head);

void	sa(t_stack *stack, int print);
void	sb(t_stack *stack, int print);
void	ss(t_stack *stack);

void	pa(t_stack *stack);
void	pb(t_stack *stack);

void	ra(t_stack *stack, int print);
void	rb(t_stack *stack, int print);
void	rr(t_stack *stack);

void	rra(t_stack *stack, int print);
void	rrb(t_stack *stack, int print);
void	rrr(t_stack *stack);

char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
int		digit_calculate(int data);
#endif