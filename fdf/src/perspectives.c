/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perspectives.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:50:48 by pnolte            #+#    #+#             */
/*   Updated: 2022/09/30 05:38:47 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	isometric(t_point *point, t_fdf fdf)
{
	t_point	copy;

	copy = *point;
	point->x = (((copy.x - copy.y) * cos(0.5236)) * fdf.factor) + fdf.origin[1];
	point->y = (((copy.x + copy.y) * sin(0.7854) - copy.z * fdf.z_factor)
			* fdf.factor) + fdf.origin[0];
}

void	front_view(t_point *point, t_fdf fdf)
{
	t_point	copy;

	copy = *point;
	point->x = ((copy.x - copy.y) * cos(0.5236) * fdf.factor) + fdf.origin[1];
	point->y = ((copy.x + copy.y) * sin(0.7854) - (copy.z * fdf.z_factor)
			* fdf.factor) + fdf.origin[0];
}

void	top_view(t_point *point, t_fdf fdf)
{
	point->x = (point->x * fdf.factor) + fdf.origin[1];
	point->y = (point->y * fdf.factor) + fdf.origin[0];
}

// void	rotation(t_point *point, t_fdf fdf)
// {
// 	t_point	copy;

// 	copy = *point;
// 	copy = rotate_x(point, &fdf);
// 	copy = rotate_x(point, &fdf);
// 	copy = rotate_x(point, &fdf);
// 	// printf("Point: Y:%d X:%d Z:%d\n", point->y, point->x, point->z);
// 	point->x = (copy.x - copy.y) + fdf.origin[1];
// 	point->y = ((copy.x + copy.y) - copy.z) + fdf.origin[0];
// }

// t_point	rotate_y(t_point *point, t_fdf *fdf)
// {
// 	t_point copy;

// 	copy = *point;
// 	point->x = (sin(fdf->rot_y) * copy.x + cos(fdf->rot_y)
// 		* copy.x) * fdf->factor;
// 	point->z = (cos(fdf->rot_y) * copy.z + -sin(fdf->rot_y)
//		* (copy.z * fdf->z_factor) * fdf->factor);
// 	return(*point);
// }

// t_point	rotate_x(t_point *point, t_fdf *fdf)
// {
// 	t_point copy;

// 	copy = *point;
// 	point->y = (cos(fdf->rot_x) * copy.y + sin(fdf->rot_x) 
//		* copy.y) * fdf->factor;
// 	point->z = (sin(fdf->rot_x) * copy.z + cos(fdf->rot_x) 
//		* copy.z) * fdf->factor;
// 	return(*point);
// }

// t_point	rotate_z(t_point *point, t_fdf *fdf)
// {
// 	t_point copy;

// 	copy = *point;
// 	point->y = (cos(fdf->rot_z) * copy.y + sin(fdf->rot_z) 
//		* copy.y) * fdf->factor;
// 	point->x = (-sin(fdf->rot_z) * copy.x + (cos(fdf->rot_z) 
//		* copy.x)) * fdf->factor;
// 	return(*point);
// }
