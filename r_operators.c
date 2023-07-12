#include "push_swap.h"

void	swap(stack_node *node)
{
	stack_node *temp;

	temp = node->next;
	
}
void	ra(t_stack *stack, int print)
{
	stack_node *temp;
	stack_node *temp2;

	temp2 = stack->head_a;
		temp = stack->head_a;
	stack->head_a = stack->head_a->next;

	while(temp->next)
	{
		temp->next = temp->next->next;
		if(!temp->next->next)
			temp = temp->next;
	}
	temp->next = temp2;
	temp2->next = 0;
		//Print
}
void	rb(t_stack *stack, int print)
{
	stack_node *temp;
	stack_node *temp2;

	temp2 = stack->head_b;
		temp = stack->head_b;
	stack->head_a = stack->head_b->next;

	while(temp->next)
	{
		temp->next = temp->next->next;
		if(!temp->next->next)
			temp = temp->next;
	}
	temp->next = temp2;
	temp2->next = 0;
		//Print
}
void rr(t_stack *stack)
{
	ra(stack,0);
	rb(stack,0);
	//Print
}