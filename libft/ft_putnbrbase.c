/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:05:11 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/24 13:12:45 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbrbase(long long int nbr, char *base)
{
	unsigned long long int	size;

	size = ft_strlen(base);
	if (size < 2)
	{
		write(1, "base size error", 15);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if ((unsigned long long int) nbr >= size)
		ft_putnbrbase(nbr / size, base);
	write(1, &base[nbr % size], 1);
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
	write(1, "ft_putnbrbase: ", ft_strlen("ft_putnbrbase: ")); 
	//Attention 0x a rajoute
	ft_putnbrbase((long long int) p, "0123456789abcdef");
	printf("\nprintf using %%p: %p\n", p);
}
*/
