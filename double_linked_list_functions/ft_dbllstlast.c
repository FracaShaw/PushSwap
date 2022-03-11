/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbllstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:24:41 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/28 12:30:52 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "push_swap.h"


t_dbllst	*ft_dbllstlast(t_dbllst *lst)
{
	t_dbllst	*temp;

	if (!lst)
		return (lst);
	temp = lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

#include <stdio.h>

int main()
{
	t_dbllst *elem1;
	t_dbllst *elem2;
	t_dbllst *elem3;

	elem1 = malloc(3);
	elem2 = malloc(3);
	elem3 = malloc(3);

	elem1->content = 1;
	elem2->content = 2;
	elem3->content = 3;

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	printf("last content:%s\n", ft_lstlast(elem1)->content);
}
