/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:42:14 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/02 16:42:15 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if	(b)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;


	a = 40;
	b = 20;

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n", div);
	printf("%d\n", mod);

}
