/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:23:49 by aumoreno          #+#    #+#             */
/*   Updated: 2023/11/23 11:32:06 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include <stdarg.h>
#include <stdint.h>

#include "libft/libft.h"

int ft_printf(char const *format, ...);
int ft_print_ptr(size_t ptr);
int ft_put_unsigned(unsigned int u);
int ft_print_hex(unsigned int x, unsigned int n);
size_t	ft_strlen(const char *s);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);




