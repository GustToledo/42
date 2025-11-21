/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:15:22 by guhenriq          #+#    #+#             */
/*   Updated: 2025/05/08 16:44:54 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int n, size_t len)
{
	unsigned char	*p;

	p = str;
	while (len > 0)
	{
		*p = (unsigned char) n;
		p++;
		len--;
	}
	return (str);
}
