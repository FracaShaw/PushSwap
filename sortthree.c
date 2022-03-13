/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortthree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:19:06 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 20:48:48 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortthree_step1(t_stack *a)
{
	int	aa;
	int	ab;
	int	ac;

	aa = a->head->content;
	ab = a->head->next->content;
	ac = a->head->next->next->content;
	sortthree_step2(a, aa, ab, ac);
}

void	sortthree_step2(t_stack *a, int aa, int ab, int ac)
{
	if (aa < ab && ab < ac)
		return ;
	if (aa > ab && aa < ac)
	{
		write(1, "sa\n", 3);
		sa(a);
		return ;
	}
	if (aa > ab && ab > ac)
	{
		write(1, "sa\nrra\n", 7);
		sa(a);
		rra(a);
		return ;
	}
	if (aa < ab && ac < ab && aa < ac)
	{
		write(1, "rra\nsa\n", 7);
		rra(a);
		sa(a);
		return ;
	}
	sortthree_step3(a, aa, ab, ac);
}

void	sortthree_step3(t_stack *a, int aa, int ab, int ac)
{
	if (aa < ab && ac < aa)
	{
		write(1, "rra\n", 4);
		rra(a);
		return ;
	}
	if (ab < ac && aa > ac)
	{
		write(1, "ra\n", 3);
		ra(a);
		return ;
	}
	if (aa < ac && ab > ac)
	{
		write(1, "sa\nra\n", 6);
		sa(a);
		ra(a);
		return ;
	}
}
