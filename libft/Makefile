# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 08:31:57 by cmartino          #+#    #+#              #
#    Updated: 2022/10/11 10:24:00 by dborione         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Compiler
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#	Sources
#	SRCS := $(shell find . -name '*.c')
SRCS = ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_memchr.c		\
		ft_strdup.c		\
		ft_strrchr.c	\
		ft_isalnum.c	\
		ft_memcmp.c		\
		ft_strlcat.c	\
		ft_tolower.c	\
		ft_isalpha.c	\
		ft_memcpy.c		\
		ft_strlcpy.c	\
		ft_toupper.c	\
		ft_isascii.c	\
		ft_memmove.c	\
		ft_strlen.c		\
		ft_isdigit.c	\
		ft_memset.c		\
		ft_strncmp.c	\
		ft_isprint.c	\
		ft_strchr.c		\
		ft_strnstr.c	\

#	Objects
OBJS = $(SRCS:.c=.o)

#	Others
NAME = libft.a
RM = rm -f

#	Colours
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m
DEFAULT = \033[0m

#	Targets
all :	$(NAME)

.c.o:
#	@echo "\033[34mBuilding...\033[0m"
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)[Done!]$(DEFAULT)"

#	Cleaning
clean:
	@echo "$(YELLOW)[Cleaning...]$(DEFAULT)"
	$(RM) $(OBJS)
	@echo "$(RED)[Objects Cleaned!]$(DEAFULT)"


fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)[Executable Cleaned!]$(DEFAULT)"

re: fclean all

.PHONY:	clean fclean re all
