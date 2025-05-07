/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:39:07 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:39:07 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Procura pela substring needle na string haystack, dentro do limite de len bytes.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*needle == '\0')  // Se needle for vazio, retorna haystack
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);  // Retorna a posição em haystack
			j++;
		}
		i++;
	}
	return (NULL);  // Não encontrou, retorna NULL
}
/*
int main(void)
{
    char haystack[] = "Hello, World!";
    char needle[] = "World";

    // Teste 1: Encontrar "World" em "Hello, World!"
    char *result = ft_strnstr(haystack, needle, 13);
    if (result)
        printf("Encontrado: %s\n", result);  // Esperado: "World!"
    else
        printf("Não encontrado\n");

    // Teste 2: Não encontrar "World" dentro dos primeiros 5 caracteres
    result = ft_strnstr(haystack, needle, 5);
    if (result)
        printf("Encontrado: %s\n", result);
    else
        printf("Não encontrado\n");  // Esperado: "Não encontrado"

    return 0;
}
*/