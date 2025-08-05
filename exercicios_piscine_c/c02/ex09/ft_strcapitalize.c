/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:46:34 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/05 14:46:35 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;

	if(str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z')
		&&	(str[i - 1] < 'a' || str[i - 1] > 'z')
		&&	(str[i - 1] < 'A' || str[i - 1] > 'Z')
		&&	(str[i - 1] < '0' || str[i - 1] > '9'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;
}

int main(){
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("Result: %s\n", str);
	return 0;
}