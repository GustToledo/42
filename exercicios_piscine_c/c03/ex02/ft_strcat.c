/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:40:55 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/05 16:40:56 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	j = 0;

	while(src[i])
	{
		i++;
	}
	while(dest[j])
	{
		src[i] = dest[j];
		j++;
		i++;
	}
	dest[i] = '\0'; 
	return(src);
}

int main()
{
	char src[100] = "ola ";
	char dest[10] = "mundo";

	ft_strcat(dest, src);

	printf("%s\n", src);
	return 0;
}