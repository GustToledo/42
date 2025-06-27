/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:43 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:43 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cria uma cópia alocada da string s.
char *ft_strdup(const char *s)
{
	char	*dup;
	int	i;

	i = 0;
	dup = (char *)malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main()
{
    const char *str = "Hello, World!";
    char *dup1 = ft_strdup(str);  // Usando a versão 1 de ft_strdup
    char *dup2 = ft_strdup(str);  // Usando a versão 2 de ft_strdup

    if (dup1 && dup2)
    {
        printf("Original: %s\n", str);
        printf("Duplicada (versão 1): %s\n", dup1);
        printf("Duplicada (versão 2): %s\n", dup2);

        free(dup1);  // Liberando a memória alocada para a string duplicada
        free(dup2);  // Liberando a memória alocada para a string duplicada
    }
    else
    {
        printf("Erro ao duplicar a string.\n");
    }

    return 0;
}
*/