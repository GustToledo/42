/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:11 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:11 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Procura o byte c em uma 
//área de memória até n bytes e retorna um ponteiro para a primeira ocorrência.
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
	{
		if (*tmp == (unsigned char)c)
			return ((void *) tmp);
		tmp++;
	}
	return ((void *) NULL);
}
/*
int	main(void)
{
	char buffer[] = "Hello, world!";
	int c = 'o';
	size_t n = 13;

	// Teste com ft_memchr
	void *result = ft_memchr(buffer, c, n);

	if (result != NULL)
	{
		printf("Caractere '%c' encontrado no endereço: %p\n", c, result);
		printf("Resultado aponta para: '%s'\n", (char *)result);
	}
	else
	{
		printf("Caractere '%c' não encontrado nos %zu primeiros bytes.\n", c, n);
	}

	// Para comparar com a função original do C:
	// void *original = memchr(buffer, c, n);
	// printf("Função padrão retorna: %p\n", original);

	return 0;
}
*/