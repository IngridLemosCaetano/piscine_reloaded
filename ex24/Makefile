# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 18:19:03 by ilemos-c          #+#    #+#              #
#    Updated: 2025/07/17 18:33:38 by ilemos-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = ./includes
FLAGS = gcc -Wall -Wextra -Werror $(INCLUDES)
SRCS = \
	srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c
OBJ = $(SRCS: .c = .o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(FLAGS) -c $< -o $@
	
clean:
	rm -f ${OBJ}

fclean:
	rm -f ${NAME}

re:
	fclean all

.PHONY: all clean fclean re

