/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_for_duplicates.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:42:02 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/27 17:04:32 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function returnes 1 if value is not in the array, else it returns 0
int	ft_check_for_duplicate(int *array, int value, int array_size)
{
	int	i;

	i = 0;
	while (i < array_size)
	{
		if (array[i] == value)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	int array[5];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	printf("output: %d expected: 0\n", ft_check_for_duplicate(array, 5, 5));
	printf("output: %d expected: 1\n", ft_check_for_duplicate(array, 6, 5));
	printf("output: %d expected: 0\n", ft_check_for_duplicate(array, 1, 5));
}
*/
