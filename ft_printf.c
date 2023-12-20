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

int ft_printf(const char *format, ...)
{
    va_list args;
    int len_args;
    va_start(args, format);
        while (*format)
        {
            if (*format == '%')
            {
                format++;
                if (*format == '%')
                {
                    write(1, format, 1);
                }
                else if (*format == 'c')
                { 
                    // put_char
                    char c = (char)va_arg(args, int);
                    write(1, &c, 1);

                }else if(*format == 's'){
                    // put_str_ (libft / utils )
                    char *c = va_arg(args, char*);
                    int pointer_len = ft_strlen(c);
                    write(1, c, pointer_len);
                }else if (*format == 'p'){
                    void *p = va_arg(args, void*);
                    ft_print_ptr((size_t)p);
                }
                else if (*format == 'd' ) 
                {
                    int n = va_arg(args, int);
                    char *c = ft_itoa(n);
                    int num_len = ft_strlen(c);
                    write(1, c, num_len);
                }else if(*format == 'i'){
                    int n = va_arg(args, int);
                    ft_putnbr_fd(n,1);
                    
                }else if(*format == 'u'){
                    unsigned int u = va_arg(args, unsigned int);
                    ft_put_unsigned(u);
                    
                }else if(*format == 'x'){
                    unsigned int x = va_arg(args, unsigned int);
                    ft_print_lower_hex(x);

                }else if(*format == 'X'){
                    unsigned int x_upper = va_arg(args, unsigned int);
                    ft_print_upper_hex(x_upper);
                }
            }else{
                write(1, format, 1);
            }
            format++;
    }
    len_args = ft_strlen(format);
    write(1, format, len_args); //
    va_end(args);
    return len_args;
}

int main()
{
    // PRUEBAS %u
    /*
    printf("%u\n", 4294967295U);
    ft_printf("%u", 4294967295U);
    */

    //pruebas %p:
    /*
    int value = 67899;
    int v2 = 481;
    printf("%p\n", &value);
    ft_printf("%p", &value);
    
    printf("\n%p\n", &v2);
    ft_printf("%p", &v2);  //FIX EL 0x, TOUPPERCASE */

    // PRUEBA %X: 
    printf("Prueba: %X\n", 824563);
    ft_printf("Prueba; %X", 824563);

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
