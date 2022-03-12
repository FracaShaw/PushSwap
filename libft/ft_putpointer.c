/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:27:49 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/24 14:27:42 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putpointer(void *p)
{
	ft_putstr_fd("0x", 1);
	ft_putnbrbase((long long int) p, "0123456789abcdef");
}
/*
#include <stdio.h>

int main()
{
	int *p;
	int a;

	a = 2;
	p = &a;
	printf("------------printing a pointer-----------\n");
	write(1, "ft_putpointer: ", ft_strlen("ft_putpointer: "));
	ft_putpointer(p);
	printf("\nprintf using %%p: %p\n", p);
}
*/
