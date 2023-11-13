/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno < aumoreno@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:09:26 by aumoreno          #+#    #+#             */
/*   Updated: 2023/08/23 21:09:26 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
    // en format tenemos %c y %c
    va_list args;
    va_start(args, format);
    int l;

    // si los args vienen vacios simplemente pintamos lo que haya en format:
    if (!args)
    {
        l = ft_strlen(format);
        write(1, args, l);
        return l;
    }
    else
    {
        while (*format)
        {
            // recorro format y cuando se encuentre un %
            if (*format == '%')
            {
                format++;
                if (*format == '%')
                {
                    write(1, format, 1);
                }
                else if (*format == 'c')
                {
                    int c = va_arg(args, int);
                    write(1, &c, 1);
                }
                else if (*format == 'd')
                {
                    int c = va_arg(args, int);
                    write(1, &c, 1);
                }
            }
            format++;
        }
    }
    // primero ver que me llegan los placeholders:
    l = ft_strlen(format);

    write(1, format, l);

    va_end(args);
    return 0;
}

int main()
{
    // const char *message = "Hello";
    //  const int numero = 10;
    //  write(1, message, 7);

    // ft_printf(" ");
    ft_printf("%c y %% y %d", 'a', 4);
    // printf("Hola %%"); //gestionar si viene solo un porcentaje

    return 0;
}
