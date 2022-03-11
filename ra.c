#include "push_swap.h"
#include <stdio.h>

void ra(t_stack *a){
    t_int *temp;

    temp = a->head->next;
    a->tail->next = a->head;
    a->head->next = NULL;
	a->tail = a->head;
    a->head = temp;
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


    printf("\n---Test ra----\n");
    ra(&a);
	temp = a.head;
	printf("Stack a\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
	    printf("\n---Test ra ra----\n");
    ra(&a);
	temp = a.head;
	printf("Stack a\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
	    printf("\n---Test ra ra ra----\n");
    ra(&a);
	temp = a.head;
	printf("Stack a\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
}
*/