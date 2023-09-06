# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbernard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 22:51:34 by mbernard          #+#    #+#              #
#    Updated: 2023/09/06 22:51:37 by mbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = altern_case
CC = cc
FLAGS = -Wall -Werror -Wextra
SRCS = basic_functions.c \
altern_case.c
HEADER = header.h
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) $(HEADER) -o $@
clean:
	rm -f $(OBJS) *~
fclean:
	rm -f $(NAME)
mrproper: clean fclean
re: clean all
