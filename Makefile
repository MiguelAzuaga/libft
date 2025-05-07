# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 15:42:21 by mqueiros          #+#    #+#              #
#    Updated: 2025/05/07 15:47:02 by mqueiros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name
NAME = libft.a
EXEC = a.out

#Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

#Files & Directories
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

#Commands
AR = ar rcs
RM = rm -rf

#Rules
all: $(NAME)

logo:
	@echo -n "\033[38;5;208m"
	@echo ""
	@echo "         :::        ::::::::::: :::::::::  :::::::::: ::::::::::: "
	@echo "        :+:            :+:     :+:    :+: :+:            :+:      "
	@echo "       +:+            +:+     +:+    +:+ +:+            +:+       "
	@echo "      +#+            +#+     +#++:++#+  :#::+::#       +#+        "
	@echo "     +#+            +#+     +#+    +#+ +#+            +#+         "
	@echo "    #+#            #+#     #+#    #+# #+#            #+#          "
	@echo "   ########## ########### #########  ###            ###           "
	@echo -n "\033[0m"
	@echo "                                                 By: Miguel Azuaga"
	@echo ""

$(NAME): $(OBJS)
	@echo "Building the Libft library..."
	@$(AR) $(NAME) $(OBJS)
	@$(MAKE) --no-print-directory logo
	@echo "\033[1;32mBuild complete!\033[0m"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJS) $(OBJS)
	@echo "Adding the bonus functions..."
	@$(AR) $(NAME) $(BONUS_OBJS) $(OBJS)
	@echo "\033[1;32mSuccessfuly added!\033[0m"

test:
	@if [ ! -f $(NAME) ]; then \
		$(MAKE) all; \
	fi
	$(CC) $(CFLAGS) main.c $(NAME) -o $(EXEC)

clean:
	@echo "Cleaning object files..."
	@$(RM) $(OBJS)
	@echo "\033[1;32mCleaned all objects!\033[0m"

fclean: clean
	@echo "Full cleaning..."
	@$(RM) $(NAME) $(EXEC)
	@echo "\033[1;32mFull clean complete!\033[0m"

re: fclean all

.PHONY: all clean fclean re logo test
