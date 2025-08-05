/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:08:35 by guhenriq          #+#    #+#             */
/*   Updated: 2025/01/30 18:08:36 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int *numbr1, **numbr2, ***numbr3, ****numbr4, *****numbr5, ******numbr6, *******numbr7, ********numbr8, *********numbr9;
    int N;
    
    numbr9 = &numbr8;
    numbr8 = &numbr7;
    numbr7 = &numbr6;
    numbr6 = &numbr5;
    numbr5 = &numbr4;
    numbr4 = &numbr3;
    numbr3 = &numbr2;
    numbr2 = &numbr1;
    numbr1 = &N;

    N = 10;
    
    ft_ultimate_ft(numbr9);
    printf("%d\n", N);
}
