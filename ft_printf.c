/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:09:26 by aumoreno          #+#    #+#             */
/*   Updated: 2023/11/16 16:35:39 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
    //TODO: falta que se printe no solo el valor despues de %
    //      implementar la gestion de malloc 
    // luego mirar para integrar bonus: 
    // en format tenemos %c y %c
    va_list args;
    int len_args;
    va_start(args, format);

    if (!args)
    {
    // si los args vienen vacios simplemente pintamos lo que haya en format:
        len_args = ft_strlen(format);
        write(1, args, len_args);
        return len_args;
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
                    char c = (char)va_arg(args, int);
                    write(1, &c, 1);

                }else if(*format == 's'){
                    char *c = va_arg(args, char*);
                    int pointer_len = ft_strlen(c);
                    write(1, c, pointer_len);
                }else if (*format == 'p'){
                    // esto va a pintar la dirección de memoria en formato hexadecimal 
                    void *p = va_arg(args, void *);
                    ft_print_ptr(p);
                }
                else if (*format == 'd')
                {
                    int n = va_arg(args, int);
                    char *c = ft_itoa(n);
                    int num_len = ft_strlen(c);
                    write(1, c, num_len);
                }else if(*format == 'i'){
                    
                }else if(*format == 'u'){
                    
                }else if(*format == 'x'){
                    
                }else if(*format == 'X'){
                    
                }
            }
            format++;
        }
    }

    //conseguir tmb que cuando se pinten los numeros se pinte tmb el resto del texto jaja (con va_copy?)
    // primero ver que me llegan los placeholders:
    len_args = ft_strlen(format);

    write(1, format, len_args); // ???

    va_end(args);
    return len_args;
}

int main()
{
    // const char *message = "Hello";
    //  const int numero = 10;
    //  write(1, message, 7);

    // ft_printf(" ");
    //ft_printf("%c y %% y %d", 'a', 467);
    //ft_printf("%s", "Lando");
    /*int value = 0; */
    void *ptr = 42;
    //ft_printf("Puntero: %p \n", (void *)ptr);
    printf("Puntero: %p", ptr);
    //printf("%c y %% y %d", 'a', 467); //gestionar si viene solo un porcentaje
    //printf("%s", "Lando"); 

    return 0;
}
