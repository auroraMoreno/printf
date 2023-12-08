/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upper_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno < aumoreno@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:16:33 by aumoreno          #+#    #+#             */
/*   Updated: 2023/12/08 11:16:33 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


//distincion entre digitios del 0-9 y del 10-15 
void ft_process_hex_upper(int x){
    if(x <= 9){
        int xUpper = ft_toupper(x + '0');
        ft_putchar_fd(xUpper,1); //hacer conversión a ASCII 
    }else{
        //aqui es cuando los numeros empiezan a ser letras 
        int xUpper = ft_toupper((x - 10) + 'a');
        ft_putchar_fd(xUpper,1); 
    }
}

//dividir el numero entre 16 hasta que sea mas pequeño 
//quedarse con el resto 
void ft_put_hex_upper(unsigned int x){
    if(x >= 16){
        ft_put_hex_upper(x / 16);
        ft_process_hex_upper(x % 16); //cogemos el modulo para: 
    }else{
        //si es menor a 16 empezar a procesarlo
        ft_process_hex_upper(x);
    }
}

void ft_print_upper_hex(unsigned int x){

    if(x == 0){
         write(1, "0", 1);
    }else{
        //pintar su hexadecimal 
        ft_put_hex_upper(x);
    }

}


