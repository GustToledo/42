/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:08:12 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/10 19:08:13 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	short menos;
	int nb;

	menos = 0;
	nb = 0;
	while((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while(*str == '+' || *str == '-')
	{
		if(*str == '-')
			menos++;
		++str;
	}
	while(*str >= 48 && *str <= 57)
	{
		nb *= 10;
		nb += *str - 48;
		++str;
	}
	if(!(menos % 2))
		return(nb);
	return(-nb);
}

int main()
{
	char test[] = {"  ---++-4321ola"};

	printf("%d\n", ft_atoi(test));
}
