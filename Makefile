# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsacquin <fsacquin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/13 16:18:04 by fsacquin          #+#    #+#              #
#    Updated: 2020/11/02 15:59:46 by fsacquin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

NAME = libft.a

HEADERS  = ./

SOURCES = ./ft_memset.c\
 ./ft_bzero.c\
 ./ft_memcpy.c\
 ./ft_memccpy.c\
 ./ft_memmove.c\
 ./ft_memchr.c\
 ./ft_memcmp.c\
 ./ft_strlen.c\
 ./ft_isalpha.c\
 ./ft_isdigit.c\
 ./ft_isalnum.c\
 ./ft_isascii.c\
 ./ft_isprint.c\
 ./ft_toupper.c\
 ./ft_tolower.c\
 ./ft_strchr.c\
 ./ft_strrchr.c\
 ./ft_strncmp.c\
 ./ft_strlcpy.c\
 ./ft_strlcat.c\
 ./ft_strnstr.c\
 ./ft_atoi.c\
 ./ft_calloc.c\
 ./ft_strdup.c\
 ./ft_substr.c\
 ./ft_strjoin.c\
 ./ft_strtrim.c\
 ./ft_split.c\
 ./ft_itoa.c\
 ./ft_strmapi.c\
 ./ft_putchar_fd.c\
 ./ft_putstr_fd.c\
 ./ft_putendl_fd.c\
 ./ft_putnbr_fd.c

OBJECTS = $(SOURCES:%.c=%.o)

OBJECTS_BONUS = $(SOURCES_BONUS:%.c=%.o)

all : $(NAME)

${NAME} :
		$(CC) $(CFLAGS) $(SOURCES) -I$(HEADERS)
		ar rc $(NAME) $(OBJECTS)

clean	:
			rm -f $(OBJECTS)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY: all clean fclean re bonus so
