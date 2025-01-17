# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 20:47:58 by ahbilla           #+#    #+#              #
#    Updated: 2025/01/17 09:58:55 by ahbilla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = src/so_long.c src/utils/ft_strrchr.c src/utils/ft_strcmp.c

	
	
	

OBJS = ${SRCS:.c=.o}
NAME = so_long
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

%.o:%.c src/so_long.h 
	${CC} ${CFLAGS} -c $< -o $@
	mv SRCS

${NAME}: ${OBJS}
	${CC} ${CFLAGS} $(OBJS) -o so_long



clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : clean