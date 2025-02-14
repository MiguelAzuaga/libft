CC = cc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a
SRCS = *.c
BONUS_SCRS = 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
				ar rc $(NAME) $(OBJS)
			
bonus:


clean:
				rm -rf $(OBJS) $(BONUS_SCRS)

fclean: clean
				rm -rf $(NAME)

re: fclean all

so:
				$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS_SCRS)
				$(CC) -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_SCRS)

.SILENT: