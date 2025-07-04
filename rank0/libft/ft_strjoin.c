/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:59 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:59 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Concatena duas strings s1 e s2 em uma nova string.
static void	copy_strings(char *dest, const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	copy_strings(str, s1, s2);
	return (str);
}
/*
int main(void)
{
	char *result = ft_strjoin("Hello, ", "world!");
	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result); // libera a memória alocada
	}
	else
		printf("Erro ao alocar memória.\n");
	return 0;
}
*/