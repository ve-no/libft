# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bako <ael-bako@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 13:37:46 by ael-bako          #+#    #+#              #
#    Updated: 2023/01/06 16:56:49 by ael-bako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

DIR_SRCS	= srcs
DIR_OBJS	= objs
SUBDIRS		= ft_is ft_to ft_mem ft_str ft_put ft_lst gnl printf

SRCS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRCS)/, $(dir)))
OBJS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJS)/, $(dir)))
SRCS		= $(foreach dir, $(SRCS_DIRS), $(wildcard $(dir)/*.c))
OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

INCLUDES	= -I inc

CC		= clang
CFLAGS	= -Wall -Wextra -Werror

$(DIR_OBJS)/%.o :	$(DIR_SRCS)/%.c
			@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
			@printf "\033[0;33mGenerating pipex objects... %-100.900s\r" $@
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@echo "\033[0;32m\n\nCompiling  libft..."
			@ar -crs $(NAME) $(OBJS)
			@echo "\n\033[0mDone !"

clean:
			@echo "\033[0;31m\nDeleting objects..."
			@rm -rf $(OBJS)
			@rm -rf $(DIR_OBJS)

fclean:		clean
			@echo "\nDeleting executable..."
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
