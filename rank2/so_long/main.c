/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:01:36 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:08:24 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	args_check(int argc, char **argv)
{
	if (argc != 2)
		alert(NULL, INVALID_NBR_ARGS);
	if (*argv[1] == '\0')
		alert(NULL, NULL_MAP);
}

int	main(int argc, char **argv)
{
	t_game	game;

	args_check(argc, argv);
	game = init_game();
	get_layout(argv[1], &game);
	map_validate(&game);
	init_mlx(&game);
	render_layout(&game);
	hook_n_execute(&game);
	return (EXIT_SUCCESS);
}
