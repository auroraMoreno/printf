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

void ft_print_ptr(size_t ptr);
void ft_put_unsigned(unsigned int u);
void ft_print_lower_hex(unsigned int x);
void ft_print_upper_hex(unsigned int x);


