/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacksize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:45:41 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/13 12:45:04 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stacksize(t_int *lst)
{
	int		size;
	t_int	*cursor;

	size = 1;
	if (!lst)
		return (0);
	cursor = lst;
	while (cursor->next)
	{
		cursor = cursor->next;
		size++;
	}
	return (size);
}
/*
int main()
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;

	elem1 = malloc(3);
	elem2 = malloc(3);
	elem3 = malloc(3);


	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	printf("size:%d\n", ft_lstsize(elem1));
}
*/
