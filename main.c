/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:41:27 by marvin            #+#    #+#             */
/*   Updated: 2023/05/03 00:41:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, world!\n");
    ft_printf("The answer is %d\n", 42);
    ft_printf("The color is %s\n", "green");
    return (0);
}
