# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 08:31:57 by cmartino          #+#    #+#              #
#    Updated: 2022/10/07 13:11:13 by dborione         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Compiler
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#	Sources
SRCS := $(shell find . -name '*.c')

#	Objects
OBJS = $(SRCS:.c=.o)

NAME = libft.a
RM = rm -f

#	Targets
all :	$(NAME)

.c.o:
#	@echo "\033[34mBuilding...\033[0m"
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "\033[32m[	Done!			]\033[0m"

#	Cleaning
clean:
	@echo "\033[33m[	Cleaning...		]\033[0m"
	$(RM) $(OBJS)
	@echo "\033[31m[	Objects Cleaned!	]\033[0m"


fclean: clean
	$(RM) $(NAME)
	@echo "\033[31m[	Executable Cleaned!	]\033[0m"

re: fclean all

.PHONY:	clean fclean re all
