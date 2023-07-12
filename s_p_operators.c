#include "push_swap.h"

void sa(t_stack *stack, int print)
{
	int temp;
	int temp2;

	if(!stack->head_a || !stack->head_a->next)
		return ;
	temp = stack->head_a->data;
	temp2 = stack->head_a->next->data;
	pop(&stack->head_a);
	pop(&stack->head_a);
	push(&stack->head_a,temp);
	push(&stack->head_a,temp2);
	if(print);
		//Ekrana yaz
}
void sb(t_stack *stack,	int	print)
{
	int temp;
	int temp2;

	if(!stack->head_b || !stack->head_b->next)
		return ;
	temp = stack->head_b->data;
	temp2 = stack->head_b->next->data;
	pop(&stack->head_b);
	pop(&stack->head_b);
	push(&stack->head_b,temp);
	push(&stack->head_b,temp2);
	if(print);
		//Ekrana yaz
}
void ss(t_stack *stack,	int print)
{
	sa(stack, 0);
	sb(stack, 0);
	if(print);
		//Ekrana yaz
}

void pa(t_stack *stack)
{
	if(!stack->head_b)
		return	;
	push(&stack->head_a,peek(stack->head_b));
	pop(&stack->head_b);
	//Ekrana yaz
}

void pb(t_stack *stack)
{
	if(!stack->head_a)
		return	;
	push(&stack->head_b,peek(stack->head_a));
	pop(&stack->head_a);
	//Ekrana yaz
}