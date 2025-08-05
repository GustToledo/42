/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:08:00 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/10 19:08:02 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + 48);
}

int main(void)
{
    ft_putnbr(42);
	ft_putchar('\n');
    ft_putnbr(-42);
	ft_putchar('\n');
    ft_putnbr(0);
	ft_putchar('\n');
    ft_putnbr(2147483647);
	ft_putchar('\n');
    ft_putnbr(-2147483648);

    return 0;
}
