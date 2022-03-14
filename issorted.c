/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:02:44 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/14 18:26:24 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	issorted(t_stack *a, t_stack *b)
{
	t_int	*temp;
	int		temp1;

	temp = b->head;
	temp1 = stacksize(a->head) + stacksize(b->head);
	while (temp)
	{
		if (temp->content > temp1)
			return (0);
		temp1 = temp->content;
		temp = temp->next;
	}
	temp = a->head;
	while (temp)
	{
		if (temp->content < temp1)
			return (0);
		temp1 = temp->content;
		temp = temp->next;
	}
	return (1);
}

int	sortcheck(t_stack *a)
{
	t_int	*temp;
	int		temp1;

	temp = a->head;
	temp1 = -1;
	while (temp)
	{
		if (temp->content < temp1)
			return (0);
		temp1 = temp->content;
		temp = temp->next;
	}
	return (1);
}
