/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:09:26 by aumoreno          #+#    #+#             */
/*   Updated: 2023/12/20 10:18:58 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
static int ft_format_processer(const char format, va_list args)
{

    return (1);
}*/

int ft_printf(const char *format, ...)
{
    va_list args;
    int len;

    va_start(args, format);

    len = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '%')
            {
                len += ft_putchar(*format);
            }
            else if (*format == 'c')
            {
                len += ft_putchar(va_arg(args, int));
            }
            else if (*format == 's')
            {
                len += ft_putstr(va_arg(args, char *));
            }
            else if (*format == 'p')
            {
                len += ft_print_ptr((size_t)va_arg(args, void *));
            }
            else if (*format == 'd' || *format == 'i')
            {
                len += ft_putnbr(va_arg(args, int));
            }
            else if (*format == 'u')
            {
                len += ft_put_unsigned(va_arg(args, unsigned int));
            }
            else if (*format == 'x')
            {
                len += ft_print_hex(va_arg(args, unsigned int), 0);
            }
            else if (*format == 'X')
            {
                len += ft_print_hex(va_arg(args, unsigned int), 1);
            }
        }
        else
        {
            len += ft_putchar(*format);
        }
        format++;
    }

    va_end(args);
    return (len);
}

