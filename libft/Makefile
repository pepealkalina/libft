# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 10:08:21 by preina-g          #+#    #+#              #
#    Updated: 2022/09/27 15:50:26 by preina-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs

NAME = libft.a

SRC = main.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c\
ft_strlcpy.c

OBJECTS:= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	$(LIB) $(NAME) $(OBJECTS)

clean:
	rm -f *.o

fclean:
	rm -f *.o $(NAME)

re:
	fclean all
