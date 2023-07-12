#include "stack.h"
#include <stdlib.h>

stack_node* newNode(int data)
{
    stack_node* stackNode = (stack_node*)malloc(sizeof(stack_node));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
  
int isEmpty(stack_node* root)
{
    return !root;
}
  
void push(stack_node** root, int data)
{
    stack_node* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
}
  
int pop(stack_node** root)
{
    if (isEmpty(*root))
        return (-1);
    stack_node* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
  
    return popped;
}
  
int peek(stack_node* root)
{
    if (isEmpty(root))
        return (-1);
    return root->data;
}