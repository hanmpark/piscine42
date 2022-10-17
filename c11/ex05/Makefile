# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hanmpark <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 21:34:30 by hanmpark          #+#    #+#              #
#    Updated: 2022/10/04 22:52:57 by hanmpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.c \
		  operation.c \
		  ft_atoi.c \
		  ft_putnbr.c \

NAME = do-op

${NAME}:
		gcc -Wall -Wextra -Werror -o ${NAME} ${SOURCES}

all:	${NAME}

clean:
		rm -f *.o

fclean:	clean
		rm -f ${NAME}

re:	fclean	all

.PHONY: all clean fclean re
