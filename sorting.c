/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:30:33 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 20:55:46 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_step1(t_stack *a, int input_size)
{
	if (input_size <= 1)
		return ;
	if (input_size == 2)
	{
		sorttwo(a);
		return ;
	}
	if (input_size == 3)
	{
		sortthree_step1(a);
		return ;
	}
	sorting_step2(a, input_size);
}

void	sorting_step2(t_stack *a, int input_size)
{
	if (input_size == 4)
	{
		sortfour_step1(a);
		return ;
	}
	if (input_size == 5)
	{
		sortfive_step1(a);
		return ;
	}
	if (input_size > 5)
	{
		radix_step1(a, input_size);
		return ;
	}
}
