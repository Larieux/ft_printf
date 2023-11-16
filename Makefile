# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlarieux <jlarieux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 13:59:35 by jlarieux          #+#    #+#              #
#    Updated: 2023/11/16 13:53:09 by jlarieux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putcharprintf.c ft_putstrprintf.c \
	ft_ptnbr_ptrprtf.c ft_ptnbr_baseprtf.c ft_ptnbruprtf.c \
	ft_rec_putnbrprtf.c ft_strlenprintf.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $^

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean :
	rm -f $(OBJS)

fclean : clean
	 rm -f $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re