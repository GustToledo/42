/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:00:53 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/03 19:37:34 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

#define VALID_ENTITIES "ECP01"

//checks if the map file contains the correct number of exits, collectibles, and player spawns
static void	throw_error_if_alt(t_game *game)
{
	if (game->map.exit == 0 || game->map.exit > 1)
		alert(game, INVALID_NBR_EXITS);
	if (game->map.collectibles == 0)
		alert(game, NO_COLLECTIBLES);
	if (game->map.player == 0 || game->map.player > 1)
		alert(game, INVALID_NBR_PLAYERS);
}

//scans every cell of the map to count entities and validate characters
//it ensures only valid symbols exist and records player position and counts of items
static void	check_elements_alt(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	while (++i < game->map.rows)
	{
		j = -1;
		while (++j < game->map.columns)
		{
			if (!is_onstr(VALID_ENTITIES, game->map.map[i][j]))
				alert(game, INVALID_ENTITY);
			if (game->map.map[i][j] == EXIT)
				game->map.exit += 1;
			else if (game->map.map[i][j] == COLLECTIBLE)
				game->map.collectibles += 1;
			else if (game->map.map[i][j] == PLAYER)
			{
				game->map.player += 1;
				game->map.player_pos = (t_point){j, i};
			}
		}
	}
	throw_error_if_alt(game);
}

//ensures the map is fully surrounded by walls
static bool	is_closed_alt(t_map *map)
{
	int	i;

	i = -1;
	while (++i < map->rows)
		if (map->map[i][0] != WALL || map->map[i][map->columns - 1] != WALL)
			return (false);
	i = -1;
	while (++i < map->columns)
		if (map->map[0][i] != WALL || map->map[map->rows - 1][i] != WALL)
			return (false);
	return (true);
}

//validates that all rows have the same number of columns (retangular map)
static bool	valid_form_alt(t_game *game)
{
	size_t	len;
	size_t	i;

	len = game->map.columns;
	i = 0;
	while (game->map.map[i] != NULL)
	{
		if (len != ft_strlen(game->map.map[i]))
			return (false);
		i += 1;
	}
	return (true);
}

//performs full map validation in order: format, entities, wall enclosure, and reachable route
void	map_validate(t_game *game)
{
	if (!valid_form_alt(game))
		alert(game, INVALID_FORMAT);
	check_elements_alt(game);
	if (!is_closed_alt(&game->map))
		alert(game, MAP_NOT_CLOSED);
	check_route(game);
}
