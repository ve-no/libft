# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bako <ael-bako@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 13:37:46 by ael-bako          #+#    #+#              #
#    Updated: 2022/10/20 19:25:16 by ael-bako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
# OPTIONS=-c
SRC= ft_atoi.c ft_isalpha.c ft_putchar_fd.c ft_strchr.c ft_tolower.c ft_strnstr.c ft_striteri.c\
ft_bzero.c ft_isascii.c ft_memcpy.c ft_putendl_fd.c ft_strlen.c ft_toupper.c ft_strmapi.c\
ft_calloc.c ft_isdigit.c ft_memmove.c ft_putnbr_fd.c ft_strrchr.c ft_strncmp.c \
ft_isalnum.c ft_isprint.c ft_memset.c ft_putstr_fd.c ft_substr.c ft_strjoin.c ft_split.c\
ft_memchr.c ft_memcmp.c ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_itoa.c ft_strtrim.c\
# SRC=ft_mem*.c ft_str*.c ft_to*.c ft_is*.c ft_atoi.c ft_bzero.c\
# ft_substr.c ft_split.c ft_itoa.c ft_put*.c ft_printf.c utils.c utils2.c \

OBJ=*.o
BONUS= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstiter.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c\

all: $(NAME)
$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
bonus: $(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)
	ar -crs $(NAME) $(OBJ)














# ar rcs libout.a out.o
# This creates the static library.
#  r means to insert with replacement, c means to create a new archive,
#  and s means to write an index. As always,

# r - replace files existing inside the archive
# c - create a archive if not already existent
# s - create an object-file index into the archive
