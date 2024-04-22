/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub_update.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 08:46:54 by jwillert          #+#    #+#             */
/*   Updated: 2023/06/28 08:10:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"   // needed for t_all, MLX42.h, cub_*()
#include "drawing.h" // needed for draw_player()
#include <unistd.h>  // needed for MACROS

void	cub_update_game(t_all *all)
{
	if (all->image_game != NULL)
	{
		all->image_game->enabled = true;
		mlx_delete_image(all->mlx, all->image_game);
	}
	cub_image_init(all, &all->image_game);
	draw_player(*all);
	cub_image_to_window(all, all->image_game);
}

void	cub_update_minimap(t_all *all, int mode)
{
	all->minimap.player_x = (int) all->per.pos.x;
	all->minimap.player_y = (int) all->per.pos.y;
	if (mode == MODE_OFF)
		return ;
	minimap_init(&all->minimap,
		all->map.map_column_max,
		all->map.map_line_max,
		mode);
	minimap_draw(all->map.a_map, all->image_game, &all->minimap);
}

/* ************************************************************************** */
