/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:38:26 by gloyer-p          #+#    #+#             */
/*   Updated: 2021/11/28 12:32:01 by gloyer-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_dbllst
{
	int				content;
	struct s_dbllst	*prev;
	struct s_dbllst	*next;
} t_dbllst;

typedef struct s_stack
{
	struct s_dbllst *head;
	struct s_dbllst *tail;
} t_stack;

#endif
