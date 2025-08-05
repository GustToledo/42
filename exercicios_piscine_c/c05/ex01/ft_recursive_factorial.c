/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:59:52 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/11 17:59:53 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if(nb < 1)
		return (0);
	if(nb == 1)
		return(1);
	else
	{
		nb *= ft_recursive_factorial(nb - 1);
		return (nb);
	}
}

int main()
{
	printf("factorial e :%d", ft_recursive_factorial(10));
	return (0);
}
