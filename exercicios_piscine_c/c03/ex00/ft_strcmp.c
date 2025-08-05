/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:18:34 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/05 16:18:35 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	while(*s1 == *s2 && *s1)
	{
		++s1, ++s2;
	}
	return(*s1 - *s2);
}

int main ()
{
	char *s1 = "hello";
	char *s2 = "helio";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	printf("%s\n", s1);
	printf("%s\n", s2);
}