/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_n_run.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:01:20 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/06 18:48:52 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//ends the game by calling the cleanup function, and exit de program
int	quit_game_alt(t_game *game)
{
	cleanup_game(game);
	exit(EXIT_SUCCESS);
	return (EXIT_SUCCESS);
}

//quits the game if ESC is pressed
//moves the hero up, down, left, or right depending on the key 
int	on_press_alt(int key, t_game *game)
{
	if (key == ESC)
		quit_game_alt(game);
	else if (key == W || key == UP)
		update_hero_pos(game, false, -1);
	else if (key == A || key == LEFT)
		update_hero_pos(game, true, -1);
	else if (key == S || key == DOWN)
		update_hero_pos(game, false, 1);
	else if (key == D || key == RIGHT)
		update_hero_pos(game, true, 1);
	return (EXIT_SUCCESS);
}

//sets up event hooks to handle keyboard and window close events,
//and starts the main MiniLibX loop
void	hook_n_execute(t_game *game)
{
	mlx_hook(game->win_ptr, KEYPRESS_EVENT, (1L << 0), on_press_alt, game);
	mlx_hook(game->win_ptr, DESTROY_NOTIFY_EVENT, (1L << 17),
		quit_game_alt, game);
	mlx_loop(game->mlx_ptr);
}
