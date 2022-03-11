/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_to_dbllst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:51:16 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/28 11:36:45 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

stack	*ft_array_to_dbllst(char *array)
{
	int		i;
	t_list	*head;

	head = ft_lstnew(array[0]);
	i = 1;
	while (*array)
	{
		temp = ft_lstnew(*array[i]);
		ft_dbllstadd_back(&head, temp);
		i++;
	}
	return (head);
}

int main()
{
	int		array[100];
	stack	a;
	s_int	temp;	

	input[0] = "-1";
	input[1] = "2";
	input[2] = "10000";
	input[3] = "4";
	input[4] = NULL;

	printf("------Test ft_array_do_dbllst------\n");
	a = ft_array_to_dbllst(array);
	temp = a.head;
	printf("from head to tail:\n");
	while (temp)
	{
		printf("%d\n", temp.nbr);
		temp = temp->next;
	}
	printf("from tail to head:\n");
	temp = a.tail;
	while (temp)
	{
		printf("%d\n", temp.nbr);
		temp = temp->prev;
	}
}
