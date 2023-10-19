# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 14:30:59 by aschenk           #+#    #+#              #
#    Updated: 2023/10/18 23:23:52 by aschenk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS =	main.c \
		./src/line.c \
		./src/more_useful_functions.c \
		./src/read_from_file.c \
		./src/read_standard_input.c \
		./src/solve.c \
		./src/test.c \
		./src/useful_functions.c \

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -Iinclude

.c.o: $(HEADER)
		gcc $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
		gcc $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
