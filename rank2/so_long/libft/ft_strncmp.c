/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:45:20 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:20:39 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		while ((unsigned char) str[i] != (unsigned char) str2[i]
			|| str[i] == 0 || str2[i] == 0)
			return ((unsigned char) str[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
