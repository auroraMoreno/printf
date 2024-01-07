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
                    ft_putchar_fd(*format,1);
                }
                else if (*format == 'c')
                { 
                    ft_putchar_fd(va_arg(args, int),1);

                }else if(*format == 's'){
                    // put_str_ (libft / utils )
					ft_putstr_fd(va_arg(args, char*),1);
                }else if (*format == 'p'){
                   ft_print_ptr((size_t)va_arg(args,void*));
                }
                else if (*format == 'd' || *format == 'i') 
                {
					ft_putnbr_fd(va_arg(args, int), 1);
                }
				else if(*format == 'u')
				{
                    ft_put_unsigned(va_arg(args, unsigned int));
                }
				else if(*format == 'x')
				{
            
                    ft_print_hex(va_arg(args, unsigned int),0);
                }
				else if(*format == 'X')
				{
                    ft_print_hex(va_arg(args, unsigned int),1);
                }
            }else{
                write(1, format, 1);
            }
            format++;
    }
    len_args = ft_strlen(format);
    write(1, format, len_args); 
    va_end(args);
    return len_args;
}

int main (){


    /*sin %*/
    printf("Func ORG:\n");
	ft_printf("Func ORG:\n");

    /*%%*/
    printf("Func ORG: %%\n");
	ft_printf("Func ORG: %%\n");

    /*%c*/
    char c = 'L';
    printf("Func ORG: %c\n", c);
	ft_printf("Func ORG: %c\n", c);

	/*%s*/
	char *s = "Lando Norris";
	printf("Func ORG: %s\n", s);
	ft_printf("Func ORG: %s\n", s);

	/*%d y %i*/
    
    printf("Caso %d (%%d): %d\n", 1, 42);
    ft_printf("Caso %d (%%d): %d\n", 1, 42);

    printf("Caso %d (%%d): %d\n", 2, -123);
    ft_printf("Caso %d (%%d): %d\n", 2, -123);

    printf("Caso %d (%%d): %d\n", 3, 789);
    ft_printf("Caso %d (%%d): %d\n", 3, 789);

    printf("Caso %d (%%d): %d\n", 4, 27);
    ft_printf("Caso %d (%%d): %d\n", 4, 27);

    printf("Caso %d (%%d): %d\n", 5, 12345);
    ft_printf("Caso %d (%%d): %d\n", 5, 12345);

    printf("Caso %d (%%d): %d\n", 6, 987);
    ft_printf("Caso %d (%%d): %d\n", 6, 987);

    printf("Caso %d (%%d): %d\n", 7, 654);
    ft_printf("Caso %d (%%d): %d\n", 7, 654);

    printf("Caso %d (%%d): %d\n", 8, 2147483647);
    ft_printf("Caso %d (%%d): %d\n", 8, 2147483647);

    //printf("Caso %d (%%d): %d\n", 9, -2147483648);
    ft_printf("Caso %d (%%d): %d\n", 9, -2147483648);
    
    printf("Caso %i org: %i\n", 19, 012);
    ft_printf("Caso %i : %i\n", 19, 012);

    printf("Caso %i (%%i): %i\n", 20, 0xA);
    ft_printf("Caso %i (%%i): %i\n", 20, 0xA);

    printf("Caso %i (%%i): %i\n", 21, -012);
    ft_printf("Caso %i (%%i): %i\n", 21, -012);

    printf("Caso %i (%%i): %i\n", 22, -0xA);
    ft_printf("Caso %i (%%i): %i\n", 22, -0xA);

    /*%X y %x*/

    // Cases for %x (lowercase hexadecimal)
    printf("Caso %d (%%x): %x\n", 1, 255);
    ft_printf("Caso %d (%%x): %x\n", 1, 255);

    printf("Caso %d (%%x): %x\n", 2, 0xABCD);
    ft_printf("Caso %d (%%x): %x\n", 2, 0xABCD);

    printf("Caso %d (%%x): %x\n", 3, 42);
    ft_printf("Caso %d (%%x): %x\n", 3, 42);

    printf("Caso %d (%%x): %x\n", 4, 16);
    ft_printf("Caso %d (%%x): %x\n", 4, 16);

    printf("Caso %d (%%x): %x\n", 5, 65535);
    ft_printf("Caso %d (%%x): %x\n", 5, 65535);

    // Cases for %X (uppercase hexadecimal)
    printf("Caso %d (%%X): %X\n", 6, 255);
    ft_printf("Caso %d (%%X): %X\n", 6, 255);

    printf("Caso %d (%%X): %X\n", 7, 0xABCD);
    ft_printf("Caso %d (%%X): %X\n", 7, 0xABCD);

    printf("Caso %d (%%X): %X\n", 8, 42);
    ft_printf("Caso %d (%%X): %X\n", 8, 42);

    printf("Caso %d (%%X): %X\n", 9, 16);
    ft_printf("Caso %d (%%X): %X\n", 9, 16);

    printf("Caso %d (%%X): %X\n", 10, 65535);
    ft_printf("Caso %d (%%X): %X\n", 10, 65535);
	
	return 0;
}