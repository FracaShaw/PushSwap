/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorttwo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:18:13 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 20:18:33 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorttwo(t_stack *a)
{
	int	aa;
	int	ab;

	aa = a->head->content;
	ab = a->head->next->content;
	if (aa > ab)
	{
		write(1, "ra\n", 3);
	}
}
