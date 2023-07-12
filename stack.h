#ifndef STACK_H
#define STACK_H

typedef struct node{
    int         data;
    struct node *next;
} stack_node ;

stack_node* newNode(int data);
int         isEmpty(stack_node* root);
void        push(stack_node** root, int data);
int         pop(stack_node** root);
int         peek(stack_node* root);
#endif