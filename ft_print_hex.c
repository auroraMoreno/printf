/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno < aumoreno@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:11:39 by aumoreno          #+#    #+#             */
/*   Updated: 2023/12/26 21:11:39 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//distincion entre digitios del 0-9 y del 10-15 
// 65535
void ft_process_hex(int x, int n){

    if(x <= 9){
        ft_putchar_fd(x + '0',1); 
    }else{
        if(n == 1){
            ft_putchar_fd((x - 10) + 'A',1);
        }else{
            ft_putchar_fd((x - 10) + 'a',1);
        }
    }
}

//dividir el numero entre 16 hasta que sea mas pequeño 
//quedarse con el resto 
void ft_put_hex(unsigned int x, unsigned int n){
    if(x >= 16){
        ft_put_hex(x / 16,n);
       // ft_process_hex(n == 1 ? (char)ft_toupper(x % 16) : (char)x % 16); //cogemos el modulo para: 
        ft_process_hex(x % 16, n); //cogemos el modulo para: 
    }else{
        //si es menor a 16 empezar a procesarlo
        ft_process_hex((char)x, n);
    }
}

void ft_print_hex(unsigned int x, unsigned int n){

    if(x == 0){
         write(1, "0", 1);
    }else{
        //pintar su hexadecimal 
        ft_put_hex(x,n);
    }

}
