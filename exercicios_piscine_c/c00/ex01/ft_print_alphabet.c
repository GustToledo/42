/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:42:08 by guhenriq          #+#    #+#             */
/*   Updated: 2025/01/29 14:42:12 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_alphabet(void)
{
	short	a;

	a = 97;
	while (a <= 122)
	{
		write(1, &a, 1);
		a ++;
	}
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}

