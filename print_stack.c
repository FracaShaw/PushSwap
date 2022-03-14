/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:17:27 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/14 16:30:13 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	print_stack(t_stack *a)
{
	t_int	*temp;

	temp = a->head;
	if (!temp)
		return ;
	while (temp)
	{
		write(1, ft_itoa(temp->content), 1);
		temp = temp->next;
	}
}
