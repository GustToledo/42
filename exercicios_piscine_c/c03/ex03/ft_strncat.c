/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:20:42 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/05 17:20:43 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;
	i = 0;
	j = 0;

	while(dest[i])
	{
		i++;
	}
	while(src[j] && nb--)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0'; 
	return(dest);
}

int main()
{
	char dest[100] = "ola ";
	char src[10] = "mundo";

	ft_strncat(dest, src, 3);

	printf("%s\n", dest);
	return 0;
}
