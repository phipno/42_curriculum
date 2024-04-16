/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:18:02 by pnolte            #+#    #+#             */
/*   Updated: 2022/09/30 07:29:25 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

/*
bresenhams line algorithm see wiki:
https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm 
*/

static void	bresenham_step(t_bresen *s, t_point first, t_point second)
{
	s->diff_x = ft_abs(second.x - first.x);
	s->diff_y = ft_abs(second.y - first.y);
	if (first.x < second.x)
		s->step_x = 1;
	else
		s->step_x = -1;
	if (first.y < second.y)
		s->step_y = 1;
	else
		s->step_y = -1;
}

void	bresenham(t_point first, t_point second, t_fdf *fdf)
{
	t_point		current;
	t_bresen	s;

	current = first;
	bresenham_step(&s, first, second);
	s.error[0] = s.diff_x - s.diff_y;
	while (current.x != second.x || current.y != second.y)
	{
		if (current.x > 0 && current.x < fdf->w_width
			&& current.y > 0 && current.y < fdf->w_height)
			mlx_put_pixel(fdf->img, current.x, current.y, current.color);
		s.error[1] = 2 * s.error[0];
		if (s.error[1] < -s.diff_y)
		{
			s.error[0] = s.error[0] - s.diff_y;
			current.x = current.x + s.step_x;
		}
		if (s.error[1] > s.diff_x)
		{
			s.error[0] = s.error[0] + s.diff_x;
			current.y = current.y + s.step_y;
		}
	}
}

/*
creates the points from the input given by the jagged array (fdf->map)
*/

t_point	create_point(int y, int x, t_fdf fdf)
{
	t_point	point;

	point.x = x;
	point.y = y;
	point.z = fdf.map[y][x].z;
	point.color = hex2int(fdf.map[y][x].color);
	if (fdf.projection == 't')
		top_view(&point, fdf);
	else if (fdf.projection == 'i')
		isometric(&point, fdf);
	else if (fdf.projection == 'f')
		front_view(&point, fdf);
	return (point);
}

/*
goes through the jagged array and creates points, that it will give to
the bresenham function to connect them with a line. Goes from (x|y) 
to (x+1|y) and then (x|y) to (x|y+1)
*/

void	draw_fdf(t_fdf *fdf)
{
	int	x;
	int	y;

	y = 0;
	while (fdf->map[y] != NULL)
	{
		x = 0;
		while (fdf->map[y][x].end_of_x != '\n')
		{
			if (fdf->map[y][x + 1].end_of_x != '\n')
				bresenham(create_point(y, x, *fdf),
					create_point(y, x + 1, *fdf), fdf);
			if (fdf->map[y + 1] != NULL && (x < fdf->length_x_map[y + 1]
					&& (fdf->map[y + 1][x].end_of_x != '\n'
					&& fdf->map[y + 1][x].existing == 'y')))
				bresenham(create_point(y, x, *fdf),
					create_point(y + 1, x, *fdf), fdf);
			x++;
		}
		y++;
	}
}
