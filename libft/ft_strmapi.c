/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:39:04 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:39:04 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cria uma nova string aplicando a função f a cada caractere da string s com seu índice.

//crio uma nova string vinda da funcao f
// f é um char pointer que recebe int e char e devolve char
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_test(unsigned int i, char c)
{
	if (i % 2 == 0)
		return toupper(c);
	else
		return tolower(c);
}

int	main(void)
{
	char *s = "HeLLo42!";
	char *result = ft_strmapi(s, ft_test);

	if (result)
	{
		printf("Original: %s\n", s);
		printf("Modified: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
*/