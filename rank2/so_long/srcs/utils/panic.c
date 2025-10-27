/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   panic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:01:13 by guhenriq          #+#    #+#             */
/*   Updated: 2025/10/24 20:08:47 by guhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	alert(t_game *game, char *error_msg)
{
	cleanup_game(game);
	ft_putstr_fd("Error: ", STDERR_FILENO);
	ft_putendl_fd(error_msg, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
