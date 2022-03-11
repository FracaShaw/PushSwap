#include "push_swap.h"
#include <stdio.h>

void sb(t_stack *b){
    if (b->head){
        if (b->head->next){
            t_int *temp;
            t_int *temp1;
            temp = b->head;
            temp1 = b->head->next->next;
            b->head = b->head->next;
            b->head->next = temp;
            b->head->next->next = temp1;
        temp = b->head;
        while(temp->next)
        {
            temp = temp->next;
        }
        b->tail = temp;
        }
    }
}
/*
int main(int argc, char *argv[])
{
    t_stack	a;
    t_stack b;
    t_int	*temp;
    int i;

  	printf("\nnargc: %d\n", argc);
	i = 0;
	while (argv[i])
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		i++;
	}	
	printf("\n\n------Test of create_stack_a----------\n");
	a = create_stack_a(argc, argv);
	temp = a.head;
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
        printf("\n---Test pb pb pb ----\n");
    pb(&a, &b);
    pb(&a, &b);
    pb(&a, &b);
	temp = a.head;
	printf("Stack a\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
    temp = b.head;
	printf("Stack b\n");
	while(temp)
	{
        
		printf("%d\n", temp->content);
		temp = temp->next;
	}


    printf("\n\n------Test of sb----------\n");
    sb(&b);
    temp = b.head;
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
    printf("\n\n------Test of sb sb----------\n");
    sb(&b);
    temp = b.head;
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
}
*/