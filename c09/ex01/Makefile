# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 17:07:44 by hanmpark          #+#    #+#              #
#    Updated: 2022/10/05 20:12:18 by hanmpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = srcs/ft_putchar.c \
		  srcs/ft_swap.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strlen.c \
		  srcs/ft_strcmp.c

OBJECTS = ${SOURCES:.c=.o}

NAME = libft.a

.c.o:
		gcc -Wall -Wextra -Werror -c -I ./includes $< -o ${<:.c=.o}

${NAME}:	${OBJECTS}
		ar -rcs ${NAME} ${OBJECTS}

all:	${NAME}

clean:	
		rm -f ${OBJECTS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
