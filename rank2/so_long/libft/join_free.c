/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:22:01 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:22:02 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*join_free(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*appended;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	appended = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!appended)
		return (NULL);
	i = 0;
	j = 0;
	while (j < len_s1)
		appended[i++] = s1[j++];
	j = 0;
	while (j < len_s2)
		appended[i++] = s2[j++];
	appended[i] = '\0';
	free(s1);
	return (appended);
}
