/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:01:02 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:09:18 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	check_error_on_xpms_alt(t_game *game)
{
	if (!game->tiles.wall)
		alert(game, WALL_XPM_ERR);
	if (!game->tiles.floor)
		alert(game, PLAYER_XPM_ERR);
	if (!game->tiles.player)
		alert(game, PLAYER_XPM_ERR);
	if (!game->tiles.collectible)
		alert(game, COLLECTIBLE_XPM_ERR);
	if (!game->tiles.exit)
		alert(game, EXIT_XPM_ERR);
}

static void	open_xpm(t_game *game)
{
	int	img_size;

	img_size = TILE_SIZE;
	game->tiles.wall = mlx_xpm_file_to_image(game->mlx_ptr,
			WALL_TILE, &img_size, &img_size);
	game->tiles.floor = mlx_xpm_file_to_image(game->mlx_ptr,
			FLOOR_TILE, &img_size, &img_size);
	game->tiles.player = mlx_xpm_file_to_image(game->mlx_ptr,
			PLAYER_TILE, &img_size, &img_size);
	game->tiles.collectible = mlx_xpm_file_to_image(game->mlx_ptr,
			COLLECTIBLE_TILE, &img_size, &img_size);
	game->tiles.exit = mlx_xpm_file_to_image(game->mlx_ptr,
			EXIT_TILE, &img_size, &img_size);
	check_error_on_xpms_alt(game);
}

void	render_tiles_alt(t_game *game)
{
	int		i;
	int		j;

	i = -1;
	while (++i < game->map.rows)
	{
		j = -1;
		while (++j < game->map.columns)
		{
			if (game->map.map[i][j] == WALL)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
					game->tiles.wall, TILE_SIZE * j, TILE_SIZE * i);
			else if (game->map.map[i][j] == COLLECTIBLE)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
					game->tiles.collectible, TILE_SIZE * j, TILE_SIZE * i);
			else if (game->map.map[i][j] == EXIT)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
					game->tiles.exit, TILE_SIZE * j, TILE_SIZE * i);
			else
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
					game->tiles.floor, TILE_SIZE * j, TILE_SIZE * i);
		}
	}
	put_hero_tile(game);
}

void	render_layout(t_game *game)
{
	open_xpm(game);
	render_tiles_alt(game);
}
