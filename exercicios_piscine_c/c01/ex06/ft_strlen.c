/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:20:23 by guhenriq          #+#    #+#             */
/*   Updated: 2025/02/04 14:20:25 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
	i = 0;

    while (str[i])
    {
        i++;
    }
	return i;
}

int main (void)
{
	char *sla;
	sla = "ola123123";

	printf("%d\n", ft_strlen(sla));
}
