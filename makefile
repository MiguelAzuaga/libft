LANG = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
