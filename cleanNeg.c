/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanNeg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:12:22 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 19:19:28 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubblesort(int array[], int array_size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (array_size - 1))
	{
		j = 0;
		while (j < (array_size - 1 - i))
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	cpyarrayint(int array[], int arrayCpy[], int array_size)
{
	int	i;

	i = 0;
	while (i < array_size)
	{
		arrayCpy[i] = array[i];
		i++;
	}
}

void	cleanneg(int array[], int array_size)
{
	int	*arraycpy;
	int	i;
	int	j;

	arraycpy = malloc(sizeof(*arraycpy) * array_size);
	cpyarrayint(array, arraycpy, array_size);
	bubblesort(arraycpy, array_size);
	i = 0;
	while (i < array_size)
	{
		j = 0;
		while (array[i] != arraycpy[j] && j < array_size)
		{
			j++;
		}
		array[i] = j;
		i++;
	}
	free(arraycpy);
}
/*
#include <stdio.h>
int main()
{
	int i; 
	int array[] = {10, 1, -2, 100};

	cleanNeg(array, 3);

	i = 0;
	printf("\narray sorted\n");
	while(i <= 3)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}
}
*/