/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbllstadd_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:44:03 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/28 12:08:47 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dbllstadd_back(t_dbllst **alst, t_dbllst *new)
{
	t_dbllst	*temp;

	if (!alst)
	{
		return ;
	}
	if (*alst)
	{
		temp = *alst;
		temp = ft_lstlast(temp);
		temp->next = new;
		new->prev = temp;
	}
	else
		*alst = new;
}


#include <stdio.h>

int main()
{
	t_dbllst elem1;
	t_dbllst elem2;
	t_dbllst elem3;
	t_dbllst new;

	elem1.content = 1;
	elem2.content = 2;
	elem3.content = 3;
	new.content = 4;
	
	elem1.prev = NULL;
	elem1.next = &elem2;
	elem2.prev = &elem1;
	elem2.next = &elem3;
	elem3.prev = &elem2;
	elem3.next = NULL;
	new.next = NULL;
	ft_dbllstadd_back(&&elem1, &new);
	printf("last content:%d\n", ft_lstlast(&elem1)->content);
	printf("prev last content:%d\n", ft_lstlast(&elem1)->prev->content);
}
