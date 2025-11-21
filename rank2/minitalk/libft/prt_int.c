/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:22:57 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:23:05 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
		digits += 1;
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

static void	put_int(int n)
{
	static char	digits[10] = "0123456789";

	if (n == INT_MIN)
		write (STDOUT_FILENO, "-2147483648", 11);
	if (n > 9)
		put_int(n / 10);
	write(STDOUT_FILENO, &digits[n % 10], 1);
}

int	prt_int(int n)
{
	put_int(n);
	return (ft_digits(n));
}
