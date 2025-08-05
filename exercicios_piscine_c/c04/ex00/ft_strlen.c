/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:07:26 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/10 19:07:45 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int nb;
	nb = 0;

    while (str[nb])
    {
        nb++;
    }
	return nb;
}

int main (void)
{
	char *sla;
	sla = "ola";

	printf("%d\n", ft_strlen(sla));
}
