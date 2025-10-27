/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:55:11 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/27 17:57:49 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include "images.h"
# include "keys.h"
# include "error_messages.h"
# include "../mlx/mlx.h"

// CONSTANTS

# define OPEN_SPACE '0'
# define WALL '1'
# define EXIT 'E'
# define COLLECTIBLE 'C'
# define PLAYER 'P'

# define KEYPRESS_EVENT 2
# define DESTROY_NOTIFY_EVENT 17

# define WIN_MSG "You won, that's all folks!\n"

typedef struct s_point
{
	int	x;
	int	y;
}				t_point;

typedef struct s_map
{
	char			**map;
	int				rows;
	int				columns;
	int				collectibles;
	int				exit;
	int				player;
	t_point			player_pos;
}				t_map;

typedef struct s_tiles
{
	void	*wall;
	void	*floor;
	void	*player;
	void	*collectible;
	void	*exit;
}				t_tiles;

typedef struct s_game
{
	t_map		map;
	void		*mlx_ptr;
	void		*win_ptr;
	t_tiles		tiles;
	int			moves;
}				t_game;

static inline t_game	init_game(void)
{
	return ((t_game){
		.map.map = NULL,
		.map.rows = 0,
		.map.columns = 0,
		.map.collectibles = 0,
		.map.exit = 0,
		.map.player = 0,
		.tiles.collectible = NULL,
		.tiles.exit = NULL,
		.tiles.floor = NULL,
		.tiles.player = NULL,
		.tiles.wall = NULL,
		.moves = -1,
	});
}

/* Parses and saves the given map */
void	get_layout(char *map_file, t_game *game);
/*	Checks if the map has a valid exit path
and if all entities are achievable */
void	check_route(t_game *game);
void	map_validate(t_game *game);

/* Initializes mlx and win pointers*/
void	init_mlx(t_game *game);

/* Renders the respective tiles according to the characters on the map */
void	render_layout(t_game *game);

void	update_hero_pos(t_game *game, bool horizontal, int length);
/* Renders player tile and moves counter */
void	put_hero_tile(t_game *game);

void	hook_n_execute(t_game *game);

int		quit_game_alt(t_game *game);

/* UTILS */

/* Calls cleanup_game() and exits the program on FAILURE */
void	alert(t_game *game, char *error_msg);

/* Destroys game ptr and all its inside fields */
void	cleanup_game(t_game *game);

/* Frees matrix ptr and all its inside fields */
void	free_matrix(char **matrix);

#endif