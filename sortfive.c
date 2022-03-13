/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:17:13 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 20:38:23 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfive_step1(t_stack *a)
{
	t_stack	b;

	b.head = NULL;
	write(1, "pb\n", 3);
	pb(a, &b);
	write(1, "pb\n", 3);
	pb(a, &b);
	sortthree_step1(a);
	sortfour_step2(a, &b);
	sortfive_step2(a, &b);
}

void	sortfive_step2(t_stack *a, t_stack *b)
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
	if (b->head->content >= a->head->content
		&& b->head->content <= a->head->next->content)
	{
		write(1, "pa\n", 3);
		pa(a, b);
		write(1, "sa\n", 3);
		sa(a);
		return ;
	}
	sortfive_step3(a, b);
}

void	sortfive_step3(t_stack *a, t_stack *b)
{
	if (b->head->content >= a->head->next->content
		&& b->head->content <= a->head->next->next->content)
	{
		write(1, "ra\nra\nsa\nrra\nrra\n", 17);
		ra(a);
		ra(a);
		pa(a, b);
		rra(a);
		rra(a);
		return ;
	}
	if (b->head->content >= a->head->next->next->content
		&& b->head->content <= a->tail->content)
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
