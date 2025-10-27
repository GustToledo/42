/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_gnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:14:01 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:14:03 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*new_string;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_string = malloc(s1_len + s2_len + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		new_string[i++] = s2[j++];
	new_string[i] = '\0';
	free(s1);
	return (new_string);
}
