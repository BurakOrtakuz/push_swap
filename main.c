#include <stdio.h>
#include "push_swap.h"
#include "./libft/libft.h"
#include <stdlib.h>

int main(int ac, char** av)
{
    int i;
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
    while(i<10)
    {  
        ra(stack,0);
        print_all(stack);  
        i++;
    }
    while(1);
    
}