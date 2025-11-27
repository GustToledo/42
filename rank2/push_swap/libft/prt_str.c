/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:23:25 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:23:26 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	prt_str(char const *str)
{
	if (str == NULL)
		return (write(STDOUT_FILENO, "(null)", 6));
	else
		return (write(STDOUT_FILENO, str, ft_strlen(str)));
}
