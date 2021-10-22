# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 14:05:10 by jpozuelo          #+#    #+#              #
#    Updated: 2021/10/22 15:06:23 by jpozuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	=	libftprintf.a

SRCS	=	ft_printf.c	\
			ft_print_format.c		\
			ft_printf_utils.c		\

OBJS		= ${SRCS:.c=.o}

CC		= gcc

RM		= rm -rf

AR		= ar rcs

CFLAGS = -Wall -Werror -Wextra

all	:		$(NAME)

$(NAME)	:	$(OBJS) 
			$(AR) $(NAME) $(OBJS)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:	
			$(RM) ${OBJS}

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
