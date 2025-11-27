/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:58:00 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/27 11:44:59 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Assign a rank (main_index) to each node according to its value. */
void	get_main_index(t_stack *sa, int size)
{
	t_stack	*a;
	t_stack	*max_address;
	int		max_n;

	while (size--)
	{
		a = sa;
		max_n = INT_MIN;
		max_address = NULL;
		while (a)
		{
			if (a->n == INT_MIN && a->main_index == 0)
				a->main_index = 1;
			else if (a->n > max_n && a->main_index == 0)
			{
				max_n = a->n;
				max_address = a;
				a = sa;
			}
			else
				a = a->next;
		}
		if (max_address)
			max_address->main_index = size + 1;
	}
}

/* Return the number of nodes in the given stack. */
int	get_stack_size(t_stack *st)
{
	int		size;
	t_stack	*s;

	size = 0;
	s = st;
	while (s)
	{
		size++;
		s = s->next;
	}
	return (size);
}

/* Allocate and initialize a new stack node with default fields. */
static t_stack	*new_node(int n)
{
	t_stack	*s;

	s = (t_stack *)malloc(sizeof(t_stack));
	if (!s)
		return (NULL);
	s->n = n;
	s->main_index = 0;
	s->position = -1;
	s->where_fit = -1;
	s->mv_a = -1;
	s->mv_b = -1;
	s->next = NULL;
	return (s);
}

/* Append a node to the end of the stack. */
static void	add_at_end(t_stack **st, t_stack *new)
{
	t_stack	*s;

	if (!new)
		return ;
	if (!*st)
		*st = new;
	else
	{
		s = *st;
		while (s->next)
			s = s->next;
		s->next = new;
	}
}

/* Build stack A from command-line arguments, validating ranges. */
t_stack	*create_stack(int ac, char **av)
{
	t_stack		*sa;
	long int	n;
	int			i;

	sa = NULL;
	n = 0;
	i = 1;
	while (i < ac)
	{
		n = ft_atol(av[i]);
		if (n < INT_MIN || n > INT_MAX)
			print_error_and_exit(&sa, NULL);
		if (i == 1)
			sa = new_node((int)n);
		else
			add_at_end(&sa, new_node((int)n));
		i++;
	}
	return (sa);
}
