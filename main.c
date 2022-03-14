/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:20:16 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/14 18:20:48 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;

	a = create_stack_a(argc, argv);
	if (!a.head)
		return (0);
	if (!(sortcheck(&a)))
		sorting_step1(&a, argc - 1);
	free_stack(a);
}
