/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:10:43 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:11:20 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*tail;

	if (!new)
		return ;
	if (!*head)
	{
		*head = new;
		return ;
	}
	tail = ft_lstlast(*head);
	tail->next = new;
}
