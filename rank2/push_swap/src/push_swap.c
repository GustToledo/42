/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:57:54 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/27 11:45:00 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Return 1 if the stack is sorted in ascending order, otherwise 0. */
int	is_sorted(t_stack *st)
{
	t_stack	*s;

	s = st;
	while (s->next)
	{
		if (s->n > s->next->n)
			return (0);
		s = s->next;
	}
	return (1);
}

/* Choose and run the appropriate sorting routine based on size. */
static void	push_swap(t_stack **sa, t_stack **sb, int size)
{
	if (size == 2 && !is_sorted(*sa))
		swap_move(sa, NULL, "sa");
	else if (size == 3)
		small_sort(sa);
	else if (size > 3 && !is_sorted(*sa))
		big_sort(sa, sb);
}

/* Program entry: validate input, build stacks, run sorting and cleanup. */
int	main(int ac, char **av)
{
	int		size;
	t_stack	*sa;
	t_stack	*sb;

	if (ac < 2)
		return (0);
	if (!is_correct_input(av))
		print_error_and_exit(NULL, NULL);
	sa = create_stack(ac, av);
	sb = NULL;
	size = get_stack_size(sa);
	get_main_index(sa, size);
	push_swap(&sa, &sb, size);
	free_stack(&sa);
	free_stack(&sb);
}
