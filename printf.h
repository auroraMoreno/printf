/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:23:49 by aumoreno          #+#    #+#             */
/*   Updated: 2023/11/16 11:41:56 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include <stdarg.h>
#include <stdint.h>

#include "libft/libft.h"

void ft_print_ptr(uintptr_t ptr);