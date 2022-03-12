# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gloyer-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/17 11:51:35 by gloyer-p          #+#    #+#              #
#    Updated: 2021/11/25 14:45:27 by gloyer-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = cleanNeg.c create_stack_a.c main.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c sorting.c ss.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

RM 		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

INCLUDE = Push_swap.h

NAME	= Push_swap

LIBFT 	= libft/libft.a

LIBFT_DIR = libft


all:	$(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) -L $(LIBFT_DIR) -lft

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re bonus