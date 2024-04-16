/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:48:45 by pnolte            #+#    #+#             */
/*   Updated: 2023/06/28 09:29:22 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "MLX42.h"
#include "libft.h"
#include "drawing.h"
#include <math.h>

void	draw_heaven_and_hell(t_all cub)
{
	int	x;
	int	y;

	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			if (y < HEIGHT / 2)
				mlx_put_pixel(cub.image_background, x, y,
					cub.map.sky_color.colour);
			else
				mlx_put_pixel(cub.image_background, x, y,
					cub.map.floor_color.colour);
			x++;
		}
		y++;
	}
}

double	pythagoras(float ax, float ay, float bx, float by)
{
	return (sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay)));
}

static	void	init_some_var(t_all *cub, t_raycaster *ray, double *angle_add)
{
	cub->per.d_pos.x = cub->per.pos.x * 64;
	cub->per.d_pos.y = cub->per.pos.y * 64;
	cub->per.dir = (cub->per.mid_dir * (M_PI / 180)) - (FOV * (M_PI / 180)) / 2;
	*angle_add = (FOV * (M_PI / 180)) / WIDTH * 1.0;
	ray->pi_half = M_PI / 2;
	ray->pi_three_half = 3 * M_PI / 2;
}

void	draw_player(t_all cub)
{
	t_raycaster	rays[2];
	double		angle_add;
	int			x;

	x = 0;
	init_some_var(&cub, &rays[1], &angle_add);
	while (x < WIDTH)
	{
		if (cub.per.dir < 0)
			cub.per.dir = cub.per.dir + 2 * M_PI;
		if (cub.per.dir > 2 * M_PI)
			cub.per.dir = cub.per.dir - 2 * M_PI;
		draw_rays_hori(cub, &rays[0]);
		draw_rays_verti(cub, &rays[1]);
		rays[0].distance_raw = pythagoras(cub.per.d_pos.x, cub.per.d_pos.y,
				rays[0].x, rays[0].y);
		rays[1].distance_raw = pythagoras(cub.per.d_pos.x, cub.per.d_pos.y,
				rays[1].x, rays[1].y);
		if (rays[0].distance_raw < rays[1].distance_raw)
			draw_walls(cub, x, rays[0]);
		else
			draw_walls(cub, x, rays[1]);
		cub.per.dir += angle_add;
		x++;
	}
}

/* ************************************************************************** */
