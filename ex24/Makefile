# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 18:19:03 by ilemos-c          #+#    #+#              #
#    Updated: 2025/07/16 17:17:32 by ilemos-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = ./includes
SRCS = ./srcs
COMPILAR = gcc -Wall -Wextra -Werror
OBJ = ./obj
FUNCOES = \
	ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c

all:
	$(COMPILAR) -c $(SRCS)/ft_putchar.c -I $(INCLUDES) -o $(OBJ)/ft_putchar.o
	gcc -Wall -Wextra -Werror -c ./srcs/ft_putchar.c -I ./includes -o ./obj/ft_putchar.o
#arquivos fontes do diretório srcs

#funções: ft_putchar.c,ft_putstr.c, ft_strcmp.c, ft_strlen.c e ft_swap.c

#cabeçalho includes

#O Makefile também deverá implementar as seguintes regras: clean, fclean e re assim como all

#fclean faz o equivalente a make clean

