/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allera-m <allera-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:41:27 by marvin            #+#    #+#             */
/*   Updated: 2023/05/11 11:22:24 by allera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
    void    *ptr;
    int     i;

    i = 42;
    //ptr = &i; 
    printf("Así es lo que debe devolver un puntero sin inicializar:\n");
    printf(" la direccion del pointer es: %p ", 0);
    return (0);
}
