# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbernard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 23:14:40 by mbernard          #+#    #+#              #
#    Updated: 2023/09/06 23:40:19 by mbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = social_nums
CC = cc
FLAGS = -Wall -Werror -Wextra
SRCS = basic_functions.c \
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) header.h -o $@
clean:
	rm -f $(OBJS) *~ .*
fclean:
	rm -f $(NAME)
mrproper: clean fclean
re: clean all
