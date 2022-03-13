/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfour.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:21:15 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 20:40:19 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfour_step1(t_stack *a)
{
	t_stack	b;

	b.head = NULL;
	write(1, "pb\n", 3);
	pb(a, &b);
	sortthree_step1(a);
	sortfour_step2(a, &b);
}

void	sortfour_step2(t_stack *a, t_stack *b)
{	
	if (b->head->content <= a->head->content)
	{
		write(1, "pa\n", 3);
		pa(a, b);
		return ;
	}
	if (b->head->content >= a->tail->content)
	{
		write(1, "pa\n", 3);
		pa(a, b);
		write(1, "ra\n", 3);
		ra(a);
		return ;
	}
	sortfour_step3(a, b);
}

void	sortfour_step3(t_stack *a, t_stack *b)
{
	if (b->head->content >= a->head->content
		&& b->head->content <= a->head->next->content)
	{
		write(1, "pa\n", 3);
		pa(a, b);
		write(1, "sa\n", 3);
		sa(a);
		return ;
	}
	if (b->head->content <= a->tail->content
		&& b->head->content >= a->head->next->content)
	{
		write(1, "rra\n", 3);
		rra(a);
		write(1, "pa\n", 3);
		pa(a, b);
		write(1, "ra\n", 3);
		ra(a);
		write(1, "ra\n", 3);
		ra(a);
		return ;
	}
}
