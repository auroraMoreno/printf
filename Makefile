# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 12:48:31 by aumoreno          #+#    #+#              #
#    Updated: 2023/12/20 21:48:09 by aumoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libftprint.a
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra 
INCLUDE  = printf.h 

SRCS = ft_printf.c ft_put_unsigned.c ft_print_upper_hex.c ft_print_lower_hex.c 
	   ft_print_ptr.c 

OBJS = $(SRCS:.c=.o)

$(NAME): $(LIBFT) $(OBJS) $(INCLUDE)
			ar -rsc $(NAME) $(OBJS)

all : $(NAME)

%.o : %.c
		@$(CC) $(CFLAGS) -c -o $@ $<


libft/libft.a : 
	$(MAKE) -C libft -f Makefile

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

