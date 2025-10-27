/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:01:31 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/27 19:05:48 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_hero_tile(t_game *game)
{
	char	*moves_str;

	game->moves += 1;
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->tiles.player,
		TILE_SIZE * game->map.player_pos.x, TILE_SIZE * game->map.player_pos.y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->tiles.wall, 0, 0);
	moves_str = ft_itoa(game->moves);
	mlx_string_put(game->mlx_ptr, game->win_ptr, 32, 10, 0xFFFF00, moves_str);
	free(moves_str);
}

static void	which_tile_alt(t_game *game)
{
	if (game->map.map[game->map.player_pos.y]
		[game->map.player_pos.x] == COLLECTIBLE)
	{
		game->map.map[game->map.player_pos.y]
		[game->map.player_pos.x] = OPEN_SPACE;
		game->map.collectibles -= 1;
		return ;
	}
	if (game->map.map[game->map.player_pos.y][game->map.player_pos.x] == EXIT
		&& game->map.collectibles == 0)
	{
		ft_printf(WIN_MSG);
		quit_game_alt(game);
	}
}

static void	update_left_behind_tile_alt(t_game *game)
{
	if (game->map.map[game->map.player_pos.y]
		[game->map.player_pos.x] == EXIT)
	{
		mlx_put_image_to_window(
			game->mlx_ptr, game->win_ptr, game->tiles.exit,
			TILE_SIZE * game->map.player_pos.x,
			TILE_SIZE * game->map.player_pos.y);
	}
	else
		mlx_put_image_to_window(
			game->mlx_ptr, game->win_ptr, game->tiles.floor,
			TILE_SIZE * game->map.player_pos.x,
			TILE_SIZE * game->map.player_pos.y);
}

void	update_hero_pos(t_game *game, bool horizontal, int length)
{
	if (horizontal)
	{
		if (game->map.map[game->map.player_pos.y]
			[game->map.player_pos.x + length] == WALL)
			return ;
		update_left_behind_tile_alt(game);
		game->map.player_pos.x += length;
	}
	else
	{
		if (game->map.map[game->map.player_pos.y + length]
			[game->map.player_pos.x] == WALL)
			return ;
		update_left_behind_tile_alt(game);
		game->map.player_pos.y += length;
	}
	which_tile_alt(game);
	put_hero_tile(game);
}
