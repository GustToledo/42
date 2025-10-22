/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:37:16 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:37:16 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Concatena src no final de dst, 
//garantindo que o total não ultrapasse n, e retorna o comprimento total que tentou criar.
size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (n == 0)
		return (ft_strlen(src));

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (n <= dst_len)
		return (n + src_len);
	while (src[i] && (dst_len + i) < n - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int main(void)
{
    char dst[20] = "Hello, ";
    const char *src = "World!";
    
    // Teste 1: Concatenar "World!" em "Hello, "
    size_t result = ft_strlcat(dst, src, 20);
    printf("Resultado da concatenação: %s\n", dst);  // Esperado: "Hello, World!"
    printf("Tamanho final: %zu\n", result);  // Esperado: 13

    // Teste 2: Concatenar mais do que o espaço disponível
    char dst2[10] = "Hello, ";
    result = ft_strlcat(dst2, src, 10);
    printf("Resultado da concatenação com limite: %s\n", dst2);  // Esperado: "Hello, Wo"
    printf("Tamanho final: %zu\n", result);  // Esperado: 13

    return 0;
}
*/