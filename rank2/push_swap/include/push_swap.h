/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:58:30 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/25 17:58:31 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_stack
{
	int				n;
	int				main_index;
	int				position;
	int				where_fit;
	int				mv_b;
	int				mv_a;
	struct s_stack	*next;
}					t_stack;

int			is_correct_input(char **arg);
int			get_stack_size(t_stack *st);
t_stack		*create_stack(int ac, char **av);
void		get_main_index(t_stack *sa, int size);
int			is_sorted(t_stack *st);

void		swap_move(t_stack **sa, t_stack **sb, char *choice);
void		small_sort(t_stack **st);
void		rotate_move(t_stack **sa, t_stack **sb, char *choice);
void		big_sort(t_stack **sa, t_stack **sb);

void		less_moves_sort(t_stack **sa, t_stack **sb);
int			get_lower_position(t_stack **st);
void		where_fit_in_a(t_stack **sa, t_stack **sb);
void		get_stack_positions(t_stack **st);
void		calculate_moves(t_stack **sa, t_stack **sb);

int			absolute(int n);
void		free_stack(t_stack **st);
void		print_error_and_exit(t_stack **sa, t_stack **sb);

#endif
