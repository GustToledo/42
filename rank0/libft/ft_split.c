/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:33 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:33 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Divide a string s em substrings usando o caractere c como delimitador.
static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*split_word(const char *s, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_mem(char **mem, size_t x)
{
	size_t	i;

	i = 0;
	while (i < x)
	{
		free(mem[i]);
		i++;
	}
	free(mem);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;

	if (!s || !(ptr = ft_calloc(count_words(s, c) + 1, sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			ptr[j] = split_word(&s[i], c);
			if (!ptr[j])
				return (free_mem(ptr, j), NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("  ola  mundo  42  ", ' ');
	if (!result)
	{
		printf("Erro ao alocar memória\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("Palavra %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/