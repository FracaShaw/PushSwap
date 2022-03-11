#include "push_swap.h"
#include <stdio.h>

void rra(t_stack *a){
    t_int *temp;
    a->tail->next = a->head;
    a->head = a->tail;
    temp = a->head;
    while(temp->next != a->tail)
    {
        temp = temp->next;
    }
    a->tail = temp;
    a->tail->next = NULL;
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


    printf("\n---Test rra----\n");
    rra(&a);
	temp = a.head;
	printf("Stack a\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
	    printf("\n---Test rra rra----\n");
    rra(&a);
	temp = a.head;
	printf("Stack a\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
	    printf("\n---Test rra rra rra----\n");
    rra(&a);
	temp = a.head;
	printf("Stack a\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
}
*/