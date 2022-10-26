# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 08:31:57 by cmartino          #+#    #+#              #
#    Updated: 2022/10/26 11:52:39 by dborione         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Compiler
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#	Sources
#	SRCS := $(shell find . -name '*.c')
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c	ft_isprint.c	\
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c	\
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c	\
	   ft_strchr.c  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c	\
	   ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c	\
	   ft_substr.c	ft_strjoin.c ft_strtrim.c ft_itoa.c	\
	   ft_strmapi.c ft_striteri.c ft_split.c	\
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c	\
		ft_split.c	\

BONUS =	ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c	\
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c	\

#	Objects
OBJS = $(SRCS:.c=.o)
B_OBJS = $(BONUS:.c=.o)

#	Others
NAME = libft.a
RM = rm -f

#	Colours
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m
DEFAULT = \033[0m

#	Targets
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)[Done!]$(DEFAULT)"

all :	$(NAME)

bonus: $(OBJ) $(B_OBJS)
	ar rcs $(NAME) $(OBJ) $(B_OBJS)

#	Cleaning
clean:
	@echo "$(YELLOW)[Cleaning...]$(DEFAULT)"
	$(RM) $(OBJS) $(B_OBJS)
	@echo "$(RED)[Objects Cleaned!]$(DEAFULT)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)[Executable Cleaned!]$(DEFAULT)"

re: fclean all

.PHONY:	clean fclean re all bonus
