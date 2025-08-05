/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:55:05 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/05 12:55:07 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z')	||	(str[i] >= 'A' && str[i] <= 'Z'))
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
	char str[] = "olaOLAola";

	printf("Result: %d\n", ft_str_is_alpha(str));
}