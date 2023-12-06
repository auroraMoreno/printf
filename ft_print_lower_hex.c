/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno < aumoreno@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:04:27 by aumoreno          #+#    #+#             */
/*   Updated: 2023/12/06 13:04:27 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//distincion entre digitios del 0-9 y del 10-15 

void ft_process_hex(int x){
    if(x <= 9){
        ft_putchar_fd(x + '0',1); //hacer conversión a ASCII 
    }else{
        //aqui es cuando los numeros empiezan a ser letras 
        ft_putchar_fd((x - 10) + 'a',1);
    }
}

//dividir el numero entre 16 hasta que sea mas pequeño 
//quedarse con el resto 
void ft_put_hex(unsigned int x){
    if(x >= 16){
        ft_put_hex(x / 16);
        ft_process_hex(x % 16); //cogemos el modulo para: 
    }else{
        //si es menor a 16 empezar a procesarlo
        ft_process_hex(x);
    }
}

void ft_print_lower_hex(unsigned int x){

    if(x == 0){
         write(1, "0", 1);
    }else{
        //pintar su hexadecimal 
        ft_put_hex(x);
    }

}