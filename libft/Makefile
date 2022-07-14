# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dohyulee <dohyulee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 22:47:52 by dohyulee          #+#    #+#              #
#    Updated: 2021/11/17 22:47:52 by dohyulee         ###   ########.fr        #
#                                                                              #z
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isdigit.c ft_lstnew.c\
	ft_lstadd_back.c ft_lstlast.c ft_lstclear.c\
	ft_strjoin.c ft_strlcpy.c ft_strlcat.c ft_strlen.c\
	ft_memset.c ft_split.c
OBJS = $(SRCS:.c=.o)
AR = ar
ARFLAGS = -rcs
RM = rm
RMFLAGS = -f

all: $(NAME)

clean:
	$(RM) $(RMFLAGS) -f $(OBJS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: all clean fclean re bonus