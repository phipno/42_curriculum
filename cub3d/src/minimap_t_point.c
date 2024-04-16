/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap_t_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:40:43 by jwillert          #+#    #+#             */
/*   Updated: 2023/06/28 07:33:08 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimap.h" // needed for t_point
#include "cub3d.h"   // needed for MLX42.h, MACROS
#include <unistd.h>  // needed for STDERR_FILENO
#include <stdio.h>   // needed for dprintf()

void	debug_print_t_point(char *name, t_point a)
{
	int	fd;

	fd = DEBUG_FD;
	if (DEBUG)
	{
		dprintf(fd, "______________________\n");
		dprintf(fd, "t_point: %s\n", name);
		dprintf(fd, "           %p\n", (void *) &a);
		dprintf(fd, "           |x %f|\n", a.x);
		dprintf(fd, "           |y %f|\n", a.y);
		dprintf(fd, "______________________\n");
	}
}

void	point_set(t_point *a, int x, int y)
{
	a->x = x;
	a->y = y;
}

void	point_set_mid(t_point *mid, t_point a, t_point b)
{
	double	size_x;
	double	size_y;

	size_x = (b.x + a.x) / 2;
	size_y = (b.y + a.y) / 2;
	point_set(mid, size_x, size_y);
}

void	point_draw_disc(mlx_image_t *image, t_point a, double diameter,
			int32_t colour)
{
	double	x;
	double	y;

	x = diameter * -1;
	y = diameter * -1;
	while (y < diameter)
	{
		while (x < diameter)
		{
			if (x * x + y * y < diameter * diameter / 4)
			{
				if ((x + a.x >= 0 && x + a.x < WIDTH)
					&& (y + a.y >= 0 && y + a.y < HEIGHT))
					mlx_put_pixel(image, (int)(x + a.x),
						(int)(y + a.y), colour);
			}
			x += 1;
		}
		x = diameter * -1;
		y += 1;
	}
}

/* ************************************************************************** */
