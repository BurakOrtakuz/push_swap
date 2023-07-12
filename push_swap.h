#ifndef PUSH_SWAP
#define PUSH_SWAP

#include "stack.h"

typedef struct 
{
    stack_node *head_a;
    stack_node *head_b;
}   t_stack;

void print_all(t_stack *stack);

void sa(t_stack *stack, int print);
void sb(t_stack *stack, int print);
void ss(t_stack *stack,	int print);

void pa(t_stack *stack);
void pb(t_stack *stack);

void    ra(t_stack *stack, int print);
void    rb(t_stack *stack, int print);
void    rr(t_stack *stack);
int	ft_atoi(const char *str);
#endif