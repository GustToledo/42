/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:57:43 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/27 11:45:00 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Free all nodes in the given stack and set pointer to NULL. */
void	free_stack(t_stack **lst)
{
	t_stack	*c;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		c = (*lst)->next;
		free(*lst);
		*lst = c;
	}
	*lst = NULL;
}

/* Print "Error" to stderr, free stacks and exit the program. */
void	print_error_and_exit(t_stack **a, t_stack **b)
{
	if (!a || *a)
		free_stack(a);
	if (!b || *b)
		free_stack(b);
	write(2, "Error\n", 6);
	exit(1);
}

/* Return the absolute value of an integer. */
int	absolute(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
