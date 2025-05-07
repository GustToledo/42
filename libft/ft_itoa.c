/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <guhenriq@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:38:08 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/07 19:38:08 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Converte um número inteiro (int) em uma string.
static int	count_char(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++; // Conta o '-' ou o '0'
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*str;

	nbr = n;
	len = count_char(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
/*
int main(void)
{
	char *str;

	// Teste com 0
	str = ft_itoa(0);
	printf("ft_itoa(0) = %s\n", str);
	free(str);

	// Teste com número positivo
	str = ft_itoa(12345);
	printf("ft_itoa(12345) = %s\n", str);
	free(str);

	// Teste com número negativo
	str = ft_itoa(-6789);
	printf("ft_itoa(-6789) = %s\n", str);
	free(str);

	// Teste com INT_MIN
	str = ft_itoa(INT_MIN);
	printf("ft_itoa(INT_MIN) = %s\n", str);
	free(str);

	// Teste com INT_MAX
	str = ft_itoa(INT_MAX);
	printf("ft_itoa(INT_MAX) = %s\n", str);
	free(str);

	return 0;
}
*/