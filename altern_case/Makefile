# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbernard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 22:51:34 by mbernard          #+#    #+#              #
#    Updated: 2023/09/06 23:34:47 by mbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = altern_case
CC = cc
FLAGS = -Wall -Werror -Wextra
SRCS = basic_functions.c \
altern_case.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) header.h -o $@
clean:
	rm -f $(OBJS) *~
fclean:
	rm -f $(NAME)
mrproper: clean fclean
re: clean all
