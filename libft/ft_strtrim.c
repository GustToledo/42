/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:39:09 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:39:09 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Remove os caracteres de set do início e do fim da string s1.

//remove todos os caracteres do início e do fim de uma string que estão presentes em um conjunto (set)
char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;
	int f;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	f = ft_strlen(s1);
	while (f > i && ft_strchr(set, s1[f - 1]))
		f--;
	str = ft_substr(s1, i, f - i);
	if (!str)
		return (NULL);
	return (str);
}
/*
int main(void)
{
	char *s1 = "+++Hello World!!++";
	char *set = "+!";
	char *result = ft_strtrim(s1, set);

	if (result)
	{
		printf("Resultado: '%s'\n", result); // Esperado: 'Hello World'
		free(result);
	}
	else
		printf("Erro ao alocar memória.\n");

	return 0;
}
*/