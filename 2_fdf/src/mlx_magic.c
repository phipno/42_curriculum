/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_magic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:02:25 by pnolte            #+#    #+#             */
/*   Updated: 2022/09/30 06:10:04 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	scrollhook(double xdelta, double ydelta, void *param)
{
	t_fdf	*fdf;

	fdf = param;
	(void)xdelta;
	if (ydelta > 0)
		fdf->factor -= 2;
	else if (ydelta < 0)
		fdf->factor += 2;
	magic(fdf);
}

void	controlls_repeat(t_fdf *fdf, mlx_key_data_t key)
{
	if (key.key == MLX_KEY_Q && key.action == MLX_REPEAT)
		fdf->z_factor -= 0.025;
	else if (key.key == MLX_KEY_E && key.action == MLX_REPEAT)
		fdf->z_factor += 0.025;
	else if (key.key == MLX_KEY_W && key.action == MLX_REPEAT)
		fdf->origin[0] -= 20;
	else if (key.key == MLX_KEY_S && key.action == MLX_REPEAT)
		fdf->origin[0] += 20;
	else if (key.key == MLX_KEY_A && key.action == MLX_REPEAT)
		fdf->origin[1] -= 20;
	else if (key.key == MLX_KEY_D && key.action == MLX_REPEAT)
		fdf->origin[1] += 20;
}

void	keyhook(mlx_key_data_t key, void *param)
{
	t_fdf	*fdf;

	fdf = param;
	if (key.key == MLX_KEY_ESCAPE && key.action == MLX_PRESS)
		mlx_close_window(fdf->mlx);
	else if (key.action == MLX_REPEAT)
		controlls_repeat(fdf, key);
	else if (key.key == MLX_KEY_T && key.action == MLX_PRESS)
	{
		fdf->projection = 't';
		fdf->origin[0] = 100;
		fdf->origin[1] = 100;
	}
	else if (key.key == MLX_KEY_I && key.action == MLX_PRESS)
	{
		fdf->projection = 'i';
		calculate_factors(fdf);
	}
	else if (key.key == MLX_KEY_F && key.action == MLX_PRESS)
	{
		fdf->projection = 'f';
		calculate_factors(fdf);
	}	
	magic(fdf);
}

void	magic(t_fdf *fdf)
{
	mlx_delete_image(fdf->mlx, fdf->img);
	fdf->img = mlx_new_image(fdf->mlx, fdf->w_width, fdf->w_height);
	mlx_image_to_window(fdf->mlx, fdf->img, 0, 0);
	draw_fdf(fdf);
}

/*
mlx42 stuff see website:
https://github.com/codam-coding-college/MLX42
and also calculating my factors that every map fits in its starting window
*/

void	mlx_call(t_fdf *fdf)
{
	fdf->w_height = 1440;
	fdf->w_width = 2560;
	fdf->mlx = mlx_init(fdf->w_width, fdf->w_height, "fil de fer", true);
	if (!fdf->mlx)
		exit(EXIT_FAILURE);
	fdf->img = mlx_new_image(fdf->mlx, fdf->w_width, fdf->w_height);
	mlx_image_to_window(fdf->mlx, fdf->img, 0, 0);
	fdf->projection = 'i';
	calculate_factors(fdf);
	draw_fdf(fdf);
	mlx_key_hook(fdf->mlx, &keyhook, fdf);
	mlx_scroll_hook(fdf->mlx, &scrollhook, fdf);
	mlx_loop(fdf->mlx);
	mlx_delete_image(fdf->mlx, fdf->img);
	mlx_terminate(fdf->mlx);
}
