/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_to_lst_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:45:04 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/28 17:17:59 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	error_freeing(t_stack a)
{
	t_int	*temp;

	while (a.head)
	{
		temp = a.head->next;
		free (a.head);
		a.head = temp;
	}
}

t_stack	ft_array_to_lst_int(int *array, int array_size)
{
	int		i;
	t_int	*temp1;
	t_int	*temp2;
	t_stack	a;

	a.head = ft_lstnew_int(array[0]);
	if (!a.head)
		return (a);
	temp1 = a.head;
	i = 1;
	while (i < array_size)
	{
		temp2 = ft_lstnew_int(array[i]);
		if (!temp2)
		{
			error_freeing(a);
			return (a);
		}
		temp1->next = temp2;
		temp1 = temp2;
		i++;
	}
	temp1->next = NULL;
	a.tail = temp1;
	return (a);
}
/*
#include <stdio.h>

int main()
{
	int		array[100];
	int		array_size;
	t_stack	a;
	t_int	*temp;

	array_size = 4;
	array[0] = -1;
	array[1] = 2;
	array[2] = 10000;
	array[3] = 4;

	a = ft_array_to_lst_int(array, array_size);
	temp = a.head;
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
}
*/
