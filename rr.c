#include "push_swap.h"
#include <stdio.h>

void rr(t_stack *a, t_stack *b){
    ra(a);
    rb(b);
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

    printf("\n---Test pb pb pb----\n");
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

    printf("\n---Test rr----\n");
    rr(&a, &b);
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
	    printf("\n---Test rr rr----\n");
    rr(&a, &b);
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
	    printf("\n---Test rr rr rr----\n");
    rr(&a, &b);
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
}
*/