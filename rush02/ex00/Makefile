# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yomajdan <yomajdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 14:22:16 by yomajdan          #+#    #+#              #
#    Updated: 2022/10/02 21:22:19 by yomajdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = rush02
CC = gcc
CFLAGS += -Wall -Werror -Wextra -I .
SRC =	check.c \
		check2.c \
		ft_split.c \
		open_file.c \
		main.c \
		sort_number.c \
		sort_number2.c \
		utils.c 
OBJ = $(SRC:.c=.o)

all: $(NAME)

all: $(NAME SHELL:=/bin/bash)
		@echo "\033[95mCompiled with flair ...\033[0m"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	 $(OBJ SHELL:=/bin/bash)
		@echo "\033[93mGarbage Collected\033[0m"

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re