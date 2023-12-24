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
					ft_putstr_fd(va_arg(args, char*),1);
                }else if (*format == 'p'){
                   ft_print_ptr((size_t)va_arg(args,void*));
                }
                else if (*format == 'd' || *format == 'i') 
                {
                    /*int n = va_arg(args, int);
                    char *c = ft_itoa(n);
                    int num_len = ft_strlen(c);
                    write(1, c, num_len);*/
					ft_putnbr_fd(va_arg(args, int), 1);
                }
				else if(*format == 'i')
				{

                }
				else if(*format == 'u')
				{
                    ft_put_unsigned(va_arg(args, unsigned int));
                }
				else if(*format == 'x')
				{
                    ft_print_lower_hex(va_arg(args, unsigned int));
                }
				else if(*format == 'X')
				{
                    ft_print_upper_hex(va_arg(args, unsigned int));
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

	/*%s*/
	char *s = "Lando Norris";
	printf("Func ORG: %s\n", s);
	ft_printf("Func ORG: %s", s);

	/*%d y %i*/
	
	return 0;
}