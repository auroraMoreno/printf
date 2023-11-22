/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 06:19:32 by aumoreno          #+#    #+#             */
/*   Updated: 2023/11/16 11:41:09 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//distincion entre digitios del 0-9 y del 10-15 

void ft_process_digit(int num){
    if(num <= 9){
        ft_putchar_fd(num + '0',1); //hacer conversión a ASCII 
    }else{
        //aqui es cuando los numeros empiezan a ser letras 
        ft_putchar_fd((num - 10) + 'a',1);
    }
}

//dividir el numero entre 16 hasta que sea mas pequeño 
//quedarse con el resto 
void ft_put_ptr(size_t ptr){
    if(ptr >= 16){
        ft_put_ptr(ptr / 16);
        ft_process_digit(ptr % 16); //cogemos el modulo para: 
    }else{
        //si es menor a 16 empezar a procesarlo
        ft_process_digit(ptr);
    }
}

void ft_print_ptr(size_t ptr){

    if(ptr == 0){
         write(1, "0", 1);
    }else{
        //pintar su hexadecimal 
        ft_put_ptr(ptr);
    }

}