# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 11:14:05 by dohyulee          #+#    #+#              #
#    Updated: 2022/06/12 18:58:47 by dohyulee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm

SRCS = push_swap.c ft_pb.c ft_pa.c ft_ra.c ft_rra.c ft_sa.c ft_simplify.c ft_atoi.c\
		ft_short_case.c ft_rb.c ft_rrb.c ft_sort.c ft_set_num_arr.c ft_set_str_arr.c main.c\
		ft_check_double.c ft_free_str_arr.c ft_free_arr.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(SRCS)
	$(MAKE) -C ./libft
	$(CC) $(CFLAGS) -L ./libft -l ft $^ -o $@

clean : 
	$(MAKE) -C ./libft fclean

fclean : clean
	$(RM) -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
