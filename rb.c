/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:24:03 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 19:24:25 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rb(t_stack *b)
{
	t_int	*temp;

	temp = b->head->next;
	b->tail->next = b->head;
	b->head->next = NULL;
	b->tail = b->head;
	b->head = temp;
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

    printf("\n---Test rb----\n");
    rb(&b);
	temp = b.head;
	printf("Stack b\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
    printf("\n---Test rb rb----\n");
    rb(&b);
	temp = b.head;
	printf("Stack b\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
    printf("\n---Test rb rb rb----\n");
    rb(&b);
	temp = b.head;
	printf("Stack b\n");
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
}
*/