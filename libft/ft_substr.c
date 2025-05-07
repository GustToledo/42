/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:39:12 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:39:12 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Retorna uma substring da string s, começando em start e com no máximo len caracteres.
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int main()
{
	char *original = "libft é top";
	char *sub;

	sub = ft_substr(original, 6, 3);  // Esperado: "é t"
	if (sub)
	{
		printf("Substring: '%s'\n", sub);
		free(sub);
	}
	else
		printf("Erro ao criar substring\n");

	sub = ft_substr(original, 20, 5);  // Esperado: "" (string vazia)
	if (sub)
	{
		printf("Substring vazia: '%s'\n", sub);
		free(sub);
	}

	return 0;
}
*/