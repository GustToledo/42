/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:36:53 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/02 15:36:54 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int a, int b, int x, int y)
{
	if ((a > 1 && a < x) && (b > 1 && b < y))
		ft_putchar(' ');
	else if ((a > 1 && a < x) && (b == 1 || b == y))
		ft_putchar('B');
	else if ((a == 1 || a == x) && (b > 1 && b < y))
		ft_putchar('B');
	else if (a > 1 && a == x)
		ft_putchar('C');
	else
		ft_putchar('A');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x < 1 || y < 1)
		return ;
	if (x > 2147483647 || x <= -2147483648)
		return ;
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			print_char(a, b, x, y);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
