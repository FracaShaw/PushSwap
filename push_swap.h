/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:38:26 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/28 17:19:32 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

t_int	*ft_lstnew_int(int content);
t_stack	ft_array_to_lst_int(int *array, int array_size);
t_stack	create_stack_a(int input_size, char **input);
void pb(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void rrr(t_stack *a, t_stack *b);
void rr(t_stack *a, t_stack *b);
void cleanNeg (int array[], int array_size);
void sorting(t_stack *a, int input_size);
void sortTwo(t_stack *a);
void sortThree_step1(t_stack *a);
void sortThree_step2(int aA, int aB, int aC);
#endif
