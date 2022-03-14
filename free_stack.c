/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:34:06 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/14 16:47:30 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack a)
{
	t_int	*temp;

	while (a.head)
	{
		temp = a.head->next;
		free (a.head);
		a.head = temp;
	}
}
