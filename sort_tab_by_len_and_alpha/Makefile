NAME = sort_tabs
CC = cc
FLAGS = -Wall -Werror -Wextra
SRCS = basic_functions.c \
ft_split.c \
test_phrase.c \
sort_functions.c
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
