/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:57:49 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/27 11:45:01 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Move the last element of the stack to the top (reverse rotate). */
static void	reverse(t_stack **top)
{
	t_stack	*ex_top;
	t_stack	*new_bottom;
	t_stack	*ex_bottom;

	ex_bottom = *top;
	new_bottom = *top;
	ex_top = *top;
	while (ex_bottom->next)
		ex_bottom = ex_bottom->next;
	while (new_bottom->next->next)
		new_bottom = new_bottom->next;
	*top = ex_bottom;
	(*top)->next = ex_top;
	new_bottom->next = NULL;
}

/* Move the top element of the stack to the bottom (rotate). */
static void	rotate(t_stack **top)
{
	t_stack	*ex_top;
	t_stack	*bottom;

	ex_top = *top;
	*top = (*top)->next;
	bottom = *top;
	while (bottom->next)
		bottom = bottom->next;
	ex_top->next = NULL;
	bottom->next = ex_top;
}

/* Dispatch and print rotate/reverse operations for one or both stacks. */
void	rotate_move(t_stack **sa, t_stack **sb, char *choice)
{
	if (ft_strcmp(choice, "ra") == 0)
		rotate(sa);
	else if (ft_strcmp(choice, "rb") == 0)
		rotate(sb);
	else if (ft_strcmp(choice, "rr") == 0)
	{
		rotate(sa);
		rotate(sb);
	}
	else if (ft_strcmp(choice, "rra") == 0)
		reverse(sa);
	else if (ft_strcmp(choice, "rrb") == 0)
		reverse(sb);
	else if (ft_strcmp(choice, "rrr") == 0)
	{
		reverse(sa);
		reverse(sb);
	}
	ft_putstr(choice);
	ft_putstr("\n");
}
