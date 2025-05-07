/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:39:02 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:39:02 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copia até n - 1 caracteres de src para dst, 
//garantindo terminação nula, e retorna o tamanho total de src.
size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t i;

	if (!dst || n == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i + n < 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (n != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

/*
int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];  // Buffer para armazenar a cópia da string

    // Teste 1: Copiar até 5 caracteres
    size_t copied = ft_strlcpy(dst, src, 5);
    printf("Copied (5 chars): %s\n", dst);  // Esperado: "Hell"
    printf("Length of src: %zu\n\n", copied);  // Esperado: 13 (comprimento de "Hello, World!")

    // Teste 2: Copiar toda a string
    copied = ft_strlcpy(dst, src, sizeof(dst));
    printf("Copied (full): %s\n", dst);  // Esperado: "Hello, World!"
    printf("Length of src: %zu\n\n", copied);  // Esperado: 13 (comprimento de "Hello, World!")

    // Teste 3: Copiar com n = 0 (não copia nada)
    copied = ft_strlcpy(dst, src, 0);
    printf("Copied (n = 0): %s\n", dst);  // Esperado: ""
    printf("Length of src: %zu\n\n", copied);  // Esperado: 13

    return 0;
}
*/