/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:05:00 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/02 19:05:01 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    if (*b)
    {
        tmp = *a;
        *a = *a / *b;
        *b = tmp % *b;
    }
}

int main(void)
{
	int n;
	int n1;
	n = 40;
	n1 = 20;

	ft_ultimate_div_mod(&n, &n1);

	printf("%d\n", n);
	printf("%d\n", n1);

}
