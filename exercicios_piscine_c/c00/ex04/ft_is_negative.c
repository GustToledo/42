/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:43:58 by guhenriq          #+#    #+#             */
/*   Updated: 2025/01/29 14:44:01 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'P';
	b = 'N';
	if (n >= 0)
	{
		write(1, &a, 1);
	}
	else
	{
		write(1, &b, 1);
	}
}


int main(void)
{
    ft_is_negative(-42);
    ft_is_negative(42);
    ft_is_negative(0);
    return 0;
}

