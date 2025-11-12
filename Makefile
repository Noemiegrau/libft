# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nograu <nograu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 17:04:28 by nograu            #+#    #+#              #
#    Updated: 2025/11/12 14:02:21 by nograu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

SRC		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c				\
			ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c			\
			ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c	\
			ft_memset.c ft_putchar_fd.c ft_putendl_fd.c					\
			ft_putnbr_fd.c ft_putstr_fd.c								\
			ft_strchr.c ft_strdup.c ft_striteri.c						\
			ft_strlcat.c ft_strlcpy.c ft_strjoin.c						\
			ft_strlen.c ft_strmapi.c ft_strncmp.c						\
			ft_strnstr.c ft_strrchr.c ft_strtrim.c						\
			ft_substr.c ft_tolower.c ft_toupper.c

OBJ		=	$(SRC: .c = .o)

GCC		=	gcc

FLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: clean fclean bonus all re