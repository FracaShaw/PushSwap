/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:02:07 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/24 16:27:28 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr(unsigned int nbr)
{
	if (nbr >= 10)
		ft_putunbr(nbr / 10);
	ft_putnbr_fd(nbr % 10, 1);
}
/*
int main()
{
	unsigned int u;

	u = 4294967295;
	ft_putunbr(u);
}
*/		
