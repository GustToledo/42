/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:02:15 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/05 14:02:16 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
		int i;
	i = 0;

	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z'))
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
	char str[] = "abchJGGdh";

	printf("Result: %d\n", ft_str_is_lowercase(str));
}