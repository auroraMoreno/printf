/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno < aumoreno@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:07:32 by aumoreno          #+#    #+#             */
/*   Updated: 2023/12/06 12:07:32 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_put_unsigned(unsigned int u){
    
    if(u <= 9){
        ft_putchar_fd(u + '0', 1);
    }else{
        ft_put_unsigned(u / 10);
        ft_put_unsigned(u % 10);
    }
}