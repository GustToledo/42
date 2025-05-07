/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:46 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:46 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Aplica a função f a cada 
//caractere da string s, passando o índice e o endereço do caractere.

//transformo a string original
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	to_uppercase(unsigned int i, char *c)
{
	(void)i;
	*c = toupper(*c);
}

int	main(void)
{
	char str[] = "hello world!";

	printf("Antes: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Depois: %s\n", str);
	return (0);
}
*/