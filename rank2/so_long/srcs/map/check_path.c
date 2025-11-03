/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:00:40 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/03 21:00:57 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

//creates a duplicate of the current map grid for path validation
static char	**blank_grid_alt(t_game *game)
{
	int		i;
	char	**grid;

	i = 0;
	grid = ft_calloc((game->map.rows + 1), sizeof(char *));
	if (!grid)
		alert(game, MALLOC_ERR);
	while (i < game->map.rows)
	{
		grid[i] = ft_strdup(game->map.map[i]);
		if (!grid[i])
		{
			free_matrix(grid);
			alert(game, MALLOC_ERR);
		}
		i += 1;
	}
	return (grid);
}

//recursive flood fill algorithm that checks if all collectibles and the exit
static bool	flood_fill_alt(t_map *map, t_point curr, char **sol_grid)
{
	static int		coins = 0;
	static bool		found_exit = false;

	if (sol_grid[curr.y][curr.x] == WALL)
		return (false);
	else if (sol_grid[curr.y][curr.x] == COLLECTIBLE)
		coins += 1;
	else if (sol_grid[curr.y][curr.x] == EXIT)
		found_exit = true;
	sol_grid[curr.y][curr.x] = WALL;
	flood_fill_alt(map, (t_point){curr.x + 1, curr.y}, sol_grid);
	flood_fill_alt(map, (t_point){curr.x - 1, curr.y}, sol_grid);
	flood_fill_alt(map, (t_point){curr.x, curr.y + 1}, sol_grid);
	flood_fill_alt(map, (t_point){curr.x, curr.y - 1}, sol_grid);
	return (coins == map->collectibles && found_exit);
}

//validates that every collectible and the exit can be reached
void	check_route(t_game *game)
{
	char	**sol_grid;

	sol_grid = blank_grid_alt(game);
	if (!flood_fill_alt(&game->map, game->map.player_pos, sol_grid))
	{
		free_matrix(sol_grid);
		alert(game, UNACHIEVABLE_ENTITIES);
	}
	free_matrix(sol_grid);
}
