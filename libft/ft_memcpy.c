/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:14 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:14 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copia n bytes de src para dst (sem tratamento de sobreposição).
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;
	
	if (!dst && !src)
    	return (NULL);
	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];  // Buffer para armazenar a cópia

    // Teste 1: Copiar 5 caracteres
    ft_memcpy(dst, src, 5);
    printf("Copia 5 caracteres: %s\n", dst);  // Esperado: "Hello"

    // Teste 2: Copiar a string inteira
    ft_memcpy(dst, src, 13);
    printf("Copia a string inteira: %s\n", dst);  // Esperado: "Hello, World!"

    // Teste 3: Copiar 0 bytes (não altera dst)
    ft_memcpy(dst, src, 0);
    printf("Copia 0 bytes: %s\n", dst);  // Esperado: "Hello, World!" (não deve mudar)

    // Teste 4: Comparar com a função memcpy padrão
    char dst_memcpy[20];
    memcpy(dst_memcpy, src, 13);
    printf("Comparando com memcpy padrão: %s\n", dst_memcpy);  // Esperado: "Hello, World!"

    // Teste 5: Copiar uma string maior do que o buffer de destino
    ft_memcpy(dst, src, 20);
    printf("Copia mais bytes do que o buffer: %s\n", dst);  // Pode causar comportamento indefinido se o buffer for pequeno

    return 0;
}
*/