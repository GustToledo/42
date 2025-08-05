/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:42:48 by guhenriq          #+#    #+#             */
/*   Updated: 2025/01/29 14:42:51 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	short	a;

	a = 122;
	while (a >= 97)
	{
		write (1, &a, 1);
		a --;
	}
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}

