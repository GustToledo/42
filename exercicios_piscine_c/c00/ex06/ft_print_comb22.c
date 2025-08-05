/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb22.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:14:23 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/11 14:14:24 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_result(char a, char b, char c, char d)
{
	char	e;

	e = ' ';
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(e);
	ft_putchar(c);
	ft_putchar(d);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_comb2_part2(int a, int b)
{
	int	c;
	int	d;

	c = a;
	while (c <= 9)
	{
		if (c == a)
			d = b + 1;
		else
			d = 0;
		while (d <= 9)
		{
			ft_result('0' + a, '0' + b, '0' + c, '0' + d);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 8)
		{
			ft_comb2_part2(a, b);
			b++;
		}
		a++;
	}
}

int main ()
{
	ft_print_comb2();
	return 0;
}