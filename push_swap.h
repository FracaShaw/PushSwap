/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <gloyer-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:38:26 by gloyer-p          #+#    #+#             */
/*   Updated: 2022/03/14 18:18:57 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

t_int	*ft_lstnew_int(int content);
t_stack	ft_array_to_lst_int(int *array, int array_size);
t_stack	create_stack_a(int input_size, char **input);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	cleanneg(int array[], int array_size);
void	sorting_step1(t_stack *a, int input_size);
void	sorting_step2(t_stack *a, int input_size);
void	sorttwo(t_stack *a);
void	sortthree_step1(t_stack *a);
void	sortthree_step2(t_stack *a, int aA, int aB, int aC);
void	sortthree_step3(t_stack *a, int aa, int ab, int ac);
void	sortfour_step1(t_stack *a);
void	sortfour_step2(t_stack *a, t_stack *b);
void	sortfour_step3(t_stack *a, t_stack *b);
void	sortfive_step1(t_stack *a);
void	sortfive_step2(t_stack *a, t_stack *b);
void	sortfive_step3(t_stack *a, t_stack *b);
void	ssort_step1(t_stack *a, int input_size);
void	ssort_step2(t_stack *a, t_stack *b, int input_size);
void	ssort_step3(t_stack *a, t_stack *b, int input_size, int j);
void	ssort_step4(t_stack *a, t_stack *b, int input_size);
int		stacksize(t_int *lst);
void	radix_step1(t_stack *a);
void	radix_step2(t_stack *a, t_stack *b, int y);
void	radix_step3(t_stack *a, t_stack *b, int y);
void	radix_step4(t_stack *a, t_stack *b, int y);
int		issorted(t_stack *a, t_stack *b);
void	print_stack(t_stack *a);
void	free_stack(t_stack a);
int		sortcheck(t_stack *a);
#endif
