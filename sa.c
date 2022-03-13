/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:26:27 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 20:32:14 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sa(t_stack *a)
{
	t_int	*temp;
	t_int	*temp1;

	if (a->head)
	{
		if (a->head->next)
		{
			temp = a->head;
			temp1 = a->head->next->next;
			a->head = a->head->next;
			a->head->next = temp;
			a->head->next->next = temp1;
			temp = a->head;
			while (temp->next)
			{
				temp = temp->next;
			}
			a->tail = temp;
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

    printf("\n\n------Test of sa----------\n");
    sa(&a);
    temp = a.head;
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
    printf("\n\n------Test of sa sa----------\n");
    sa(&a);
    temp = a.head;
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
}
*/