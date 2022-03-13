/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:06:58 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/12 19:20:00 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input0(char **input)
{
	int	i;
	int	y;

	i = 1;
	while (input[i])
	{
		if (!(ft_isdigit(input[i][0]) || input[i][0] == '-'))
			return (0);
		if (input[i][0] == '-' && !ft_isdigit(input[i][1]))
			return (0);
		y = 1;
		while (input[i][y] != '\0')
		{
			if (!ft_isdigit(input[i][y]))
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

int	check_input(char **input, int *array)
{
	int	i;
	int	input_atoied;

	check_input0(input);
	i = 0;
	while (input[i + 1])
	{
		input_atoied = ft_atoi(input[i + 1]);
		if (!ft_check_for_duplicate(array, input_atoied, i))
			return (0);
		array[i] = input_atoied;
		i++;
	}
	return (1);
}	

t_stack	create_stack_a(int input_size, char **input)
{
	int		*array;
	t_stack	a;

	a.head = NULL;
	if (input_size == 1)
		return (a);
	array = malloc(sizeof(*array) * input_size);
	if (!array)
		return (a);
	if (!check_input(input, array))
	{
		free (array);
		return (a);
	}
	cleanneg(array, input_size -1);
	a = ft_array_to_lst_int(array, input_size - 1);
	free (array);
	if (!a.head)
		return (a);
	return (a);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	char	*input[9];
	int		array[100];
	t_stack	a;
	t_int	*temp;
	int i;

	input[0] = "./a.out";
	input[1] = "2";
	input[2] = "10000";
	input[3] = "4";
	input[4] = NULL;
	printf("-----Test of check_input0-----------\n");
	printf("output: %d expected: 1\n", check_input0(input));
	input[3] = "-";
	printf("output: %d expected: 0\n", check_input0(input));
	input[3] = "-999";
	input[1] = "123one";
	printf("output: %d expected: 0\n", check_input0(input));
	input[1] = "0";
	input[2] = "0123-5";
	printf("output: %d expected: 0\n", check_input0(input));
	
	input[0] = "./a.out";
	input[1] = "2";
	input[2] = "10000";
	input[3] = "4";
	input[4] = NULL;
	printf("\n\n\n--------Test of check_input------\n");
	printf("output: %d expected: 1\n", check_input(input, array));
	input[2] = "2";
	printf("output: %d expected: 0\n", check_input(input, array));
	input[2] = "0";
	input[3] = "one";
	printf("output: %d expected: 0\n", check_input(input, array));

	printf("\n\n\nargc: %d\n", argc);
	i = 0;
	while (argv[i])
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		i++;
	}	
	printf("\n\n\n------Test of create_stack_a----------\n");
	a = create_stack_a(argc, argv);
	temp = a.head;
	while(temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}

}
*/