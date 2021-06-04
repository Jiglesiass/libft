# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joiglesi <joiglesi@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 11:11:18 by joiglesi          #+#    #+#              #
#    Updated: 2021/06/04 12:06:09 by joiglesi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
OBJ_FILES = $(EXTRA_FILES) ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_itoa.o ft_putchar_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_putnbr_fd.o ft_split.o ft_strjoin.o ft_strmapi.o ft_strtrim.o ft_substr.o
EXTRA_FILES = ft_abs.o ft_numlen.o ft_islower.o ft_isupper.o ft_strnchr.o ft_itoa_nmalloc.o ft_rfree.o ft_isblank.o ft_isspace.o ft_strtrimstr.o
BONUS_FILES = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o
HEADER_FILES = libft.h
NAME = libft.a
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ_FILES) $(EXTRA_FILES)
	ar -rusc $@ $^

bonus: $(NAME) $(BONUS_FILES)
	ar -rusc $^

%.o : %.c $(HEADER_FILES)
	$(CC) -c $(FLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES) $(BONUS_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
