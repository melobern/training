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
