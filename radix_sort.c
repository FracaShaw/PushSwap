/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:21:46 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/14 17:46:34 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	radix_step1(t_stack *a)
{
	t_stack	b;

	b.head = NULL;
	radix_step2(a, &b, 0);
}

void	radix_step2(t_stack *a, t_stack *b, int y)
{
	int	i;
	int	a_size;

	i = 0;
	a_size = stacksize(a->head);
	while (i < a_size)
	{
		if (!((a->head->content >> y) & 1))
		{
			write(1, "pb\n", 3);
			pb(a, b);
		}
		else
		{
			write(1, "ra\n", 3);
			ra(a);
		}
		i++;
	}
	y++;
	radix_step3(a, b, y);
}

void	radix_step3(t_stack *a, t_stack *b, int y)
{
	int	b_size;
	int	i;

	b_size = stacksize(b->head);
	i = 0;
	while (i < b_size)
	{
		if ((b->head->content >> y) & 1)
		{
			write(1, "pa\n", 3);
			pa(a, b);
		}
		else
		{
			write(1, "rb\n", 3);
			rb(b);
		}
		i++;
	}
	radix_step4(a, b, y);
}

void	radix_step4(t_stack *a, t_stack *b, int y)
{
	if (issorted(a, b))
	{
		while (stacksize(b->head))
		{
			write(1, "pa\n", 3);
			pa(a, b);
		}
		return ;
	}
	radix_step2(a, b, y);
}
