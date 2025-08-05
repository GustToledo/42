/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:58:39 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/05 13:58:41 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
		int i;
	i = 0;

	while(str[i] != '\0')
	{
		if((str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
		else
		return (0);
	}
	return (1);
}

int main(void)
{
	char str[] = "123456789";

	printf("Result: %d\n", ft_str_is_numeric(str));
}