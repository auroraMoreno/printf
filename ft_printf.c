/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:09:26 by aumoreno          #+#    #+#             */
/*   Updated: 2023/11/23 11:55:53 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
    //TODO: falta que se printe no solo el valor despues de %
    //      implementar la gestion de malloc 
    // en format tenemos %c y %c
    va_list args;
    int len_args;
    va_start(args, format);

    // si los args vienen vacios simplemente pintamos lo que haya en format:
        /*len_args = ft_strlen(format);
        if(len_args >= 0){
            write(1, args, len_args);
            return len_args;
        }else{
            */
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
                    void *p = va_arg(args, void*);
                    ft_print_ptr((size_t)p);
                }
                else if (*format == 'd')
                {
                    //solo le va a venir en base 10
                    int n = va_arg(args, int);
                    char *c = ft_itoa(n);
                    int num_len = ft_strlen(c);
                    write(1, c, num_len);
                }else if(*format == 'i'){
                    // le puede venir en cualquier formato 
                    int n = va_arg(args, int);
                    ft_putnbr_fd(n,1);
                    
                }else if(*format == 'u'){
                    
                    
                }else if(*format == 'x'){
                    
                }else if(*format == 'X'){
                    
                }
            }
            format++;
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
    
    //pruebas %p:
    int value = 67899;
    int v2 = 481;
    printf("%p\n", &value);
    ft_printf("%p", &value);
    
    printf("\n%p\n", &v2);
    ft_printf("%p", &v2);
    //pruebas %i:
    /*
    int zero = 0;
    int negativeLargeNumber = -987654321;
    int octalNumber2 = 0123;            // Octal representation (83 in decimal)
    int hexadecimalNumber2 = 0xABCD;  

    printf("Zero: %i\n", zero);
    ft_printf("Zero: %i\n", zero);
    printf("Negative Large Number: %i\n", negativeLargeNumber);
    ft_printf("Negative Large Number: %i\n", negativeLargeNumber);
    printf("Octal: %i\n", octalNumber2);
    ft_printf("Octal: %i\n", octalNumber2);
    printf("Hexadecimal: %i\n", hexadecimalNumber2);
    ft_printf("Hexadecimal: %i\n", hexadecimalNumber2);
    */
   
    return 0;
}
