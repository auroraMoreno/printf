# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aumoreno < aumoreno@student.42madrid.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 12:48:31 by aumoreno          #+#    #+#              #
#    Updated: 2023/12/08 12:48:31 by aumoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libftprint.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra 

SRCS = ft_printf.c ft_put_unsigned.c ft_print_upper_hex.c ft_print_lower_hex.c 
	   ft_print_ptr.c 

OBJS = $(SRCS:.c=.o)

INCLUDE  = printf.h 

$(NAME): $(OBJS) $(INCLUDE)
			ar -rsc $(NAME) $(OBJS)

all : $(NAME)

%.o : %.c
		@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

