CC = cc
CFLAGS = -Wall -Wextra -Werror


NAME = libft.a

SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS) $(BONUS_SCRS)

fclean: clean
				rm -rf $(NAME)

re: fclean all

#so:
#				$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS_SCRS)
#				$(CC) -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_SCRS)
#
#.SILENT: