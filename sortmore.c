/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortmore.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:22:21 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/13 14:19:57 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ssort_step1(t_stack *a, int input_size)
{
	t_stack	b;

	b.head = NULL;
	ssort_step2(a, &b, input_size);
}

void	ssort_step2(t_stack *a, t_stack *b, int input_size)
{
	t_int	*temp;
	int		check;
	int		i;
	int		j;

	temp = a->head;
	check = input_size;
	i = 0;
	j = 0;
	while (temp)
	{
		if (temp->content < check)
		{
			check = temp->content;
			j = i;
		}
		i++;
		temp = temp->next;
	}
	ssort_step3(a, b, input_size, j);
}

void	ssort_step3(t_stack *a, t_stack *b, int input_size, int j)
{
	int	temp;

	temp = stacksize(a->head) - j;
	if (temp > j)
	{
		while (j > 0)
		{
			write(1, "ra\n", 3);
			ra(a);
			j--;
		}
	}
	else
	{
		while (temp > 0)
		{
			write(1, "rra\n", 4);
			rra(a);
			temp--;
		}
	}
	ssort_step4(a, b, input_size);
}

void	ssort_step4(t_stack *a, t_stack *b, int input_size)
{
	write(1, "pb\n", 3);
	pb(a, b);
	if (a->head->next)
		radix_step2(a, b, input_size);
	else
	{
		while (input_size > 1)
		{
			write(1, "pa\n", 3);
			pa(a, b);
			input_size--;
		}
	}
}
