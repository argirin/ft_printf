# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: argirin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 02:07:56 by argirin           #+#    #+#              #
#    Updated: 2016/12/02 18:10:48 by argirin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

CC =	gcc

FLG =	-Wall -Werror -Wextra -c

SRC =	ft_memalloc.c		\
		ft_putendl_fd.c		\
		ft_strequ.c			\
		ft_strnew.c			\
		ft_memccpy.c		\
		ft_putnbr.c			\
		ft_striter.c		\
		ft_strnstr.c		\
		ft_memchr.c			\
		ft_putnbr_fd.c		\
		ft_striteri.c		\
		ft_strrchr.c		\
		ft_atoi.c			\
		ft_memcmp.c			\
		ft_putstr.c			\
		ft_strjoin.c		\
		ft_strrev.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_putstr_fd.c		\
		ft_strlcat.c		\
		ft_strsplit.c		\
		ft_count_digit.c	\
		ft_memdel.c			\
		ft_strcat.c			\
		ft_strlen.c			\
		ft_strstr.c			\
		ft_isalnum.c		\
		ft_memmove.c		\
		ft_strchr.c			\
		ft_strmap.c			\
		ft_strsub.c			\
		ft_isalpha.c		\
		ft_memset.c			\
		ft_strclr.c			\
		ft_strmapi.c		\
		ft_strtrim.c		\
		ft_isascii.c		\
		ft_strcmp.c			\
		ft_strncat.c		\
		ft_tolower.c		\
		ft_isdigit.c		\
		ft_putchar.c		\
		ft_strcpy.c			\
		ft_strncmp.c		\
		ft_toupper.c		\
		ft_isprint.c		\
		ft_putchar_fd.c		\
		ft_strdel.c			\
		ft_strncpy.c		\
		ft_itoa.c			\
		ft_putendl.c		\
		ft_strdup.c			\
		ft_strnequ.c		\
		ft_lstnew.c			\
		ft_lstiter.c		\
		ft_lstdelone.c		\
		ft_lstdel.c			\
		ft_swap.c			\
		ft_first_word.c		\
		ft_lstmap.c			\
		ft_hidenp.c			\
		ft_lstadd.c			\
		ft_itoa_base.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	@$(CC) $(FLG) $(SRC)
	@ar rc $(NAME) $(OBJ)			
	@ranlib $(NAME)

clean: 
	@rm -rf $(OBJ) 

fclean:	clean
	@rm -rf $(NAME)

re:		fclean all
