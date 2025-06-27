/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:17 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:17 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copia n bytes de src para dst, lidando corretamente com sobreposição de memória.
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d >= s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(d, s, n);
	return (dst);
}
/*
int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];

    // Teste 1: Copiar os primeiros 5 caracteres
    ft_memmove(dst, src, 5);
    printf("ft_memmove (5 chars): %s\n", dst);  // Esperado: "Hello"

    // Teste 2: Copiar sobreposição dentro de src
    ft_memmove(src + 7, src, 5);
    printf("ft_memmove (sobreposição): %s\n", src);  // Esperado: "Hello, Hello!"

    return 0;
}
*/