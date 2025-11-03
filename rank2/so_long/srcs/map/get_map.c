/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:00:46 by guhenriq          #+#    #+#             */
/*   Updated: 2025/11/03 19:29:35 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//checks if the given file has a valid .ber extension  
static bool	valid_extension_alt(char *map_file)
{
	size_t	i;

	i = ft_strlen(map_file) - 4;
	if (ft_strncmp(".ber", &map_file[i], 4) == 0)
		return (true);
	return (false);
}

//counts how many lines (rows) exist in the map file
static void	get_nbr_rows_alt(char *map_file, t_game *game)
{
	int		counter;
	int		map_fd;
	char	*temp;

	counter = 0;
	map_fd = open(map_file, O_RDONLY);
	if (map_fd == -1)
		alert(game, OPEN_MAP_FILE_ERR);
	temp = get_next_line(map_fd);
	while (temp)
	{
		counter += 1;
		free(temp);
		temp = get_next_line(map_fd);
	}
	if (counter == 0)
		alert(game, EMPTY_MAP_FILE);
	game->map.rows = counter;
	close(map_fd);
}

//reads and stores each line of the map into memory, removing newline characters
static void	get_lines_alt(char *map_file, t_game *game)
{
	int	map_fd;
	int	i;

	map_fd = open(map_file, O_RDONLY);
	if (map_fd == -1)
		alert(game, OPEN_MAP_FILE_ERR);
	i = 0;
	while (i < game->map.rows)
		game->map.map[i++] = get_next_line(map_fd);
	game->map.map[i] = NULL;
	close(map_fd);
	i = 0;
	while (i < (game->map.rows - 1))
	{
		game->map.map[i] = trim_free(game->map.map[i], "\n");
		if (!game->map.map[i])
			alert(game, MALLOC_ERR);
		i += 1;
	}
	game->map.columns = ft_strlen(game->map.map[0]);
}

//loads the map layout from the given .ber file into the game structure
void	get_layout(char *map_file, t_game *game)
{
	if (!valid_extension_alt(map_file))
		alert(game, INVALID_MAP_FILE);
	get_nbr_rows_alt(map_file, game);
	game->map.map = malloc((game->map.rows + 1) * sizeof(char *));
	if (!game->map.map)
		alert(game, MALLOC_ERR);
	get_lines_alt(map_file, game);
}
