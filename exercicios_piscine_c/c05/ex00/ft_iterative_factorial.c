/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:47:45 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/11 14:47:46 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int fac;
	int result;

	fac = 1;
	result = 1;
	if(nb < 1)
		return (0);
	while(fac != (nb))
	{
		result *= (fac + 1);
		fac ++;
	}
	return(result);
}

int main()
{
	printf("%d\n", ft_iterative_factorial(3));
	return 0;
}