/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:22:49 by pnolte            #+#    #+#             */
/*   Updated: 2022/10/03 12:02:55 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"
# include "MLX42/include/MLX42/MLX42.h"
# include <math.h>
# include <stdbool.h>

typedef struct s_coord
{
	int		z;
	char	*color;
	char	end_of_x;
	char	existing;
}	t_coord;

typedef struct s_point
{
	int			x;
	int			y;
	int			z;
	uint32_t	color;
}			t_point;

//my main Struct

typedef struct s_fdf
{
	mlx_t		*mlx;
	t_coord		**map;
	mlx_image_t	*img;
	int			factor;
	float		z_factor;
	int			origin[2];
	int			w_height;
	int			w_width;
	int			*length_x_map;
	int			fd;
	int			count_nl;
	char		projection;
}			t_fdf;

//for bresenham line algorithim

typedef struct s_bresen
{
	int	diff_x;
	int	step_x;
	int	diff_y;
	int	step_y;
	int	error[2];
}			t_bresen;

//src/main.c
void	my_exit(int status);
void	freeee(t_fdf *fdf);
void	freeee_split(char **split);

//src/init.c
void	init_map(t_fdf *fdf, char **argv);
void	parsing(t_fdf *fdf);
void	count_nl(t_fdf *fdf);
int		how_many_splits(char **split);
void	insert_z(t_fdf *fdf, int y, char **split);

//src/stuff_with_color.c
char	*init_color(t_fdf *fdf, int y, int x, char *split);
void	color_start_and_end(char *color, int *j, int *i, int *size);
char	*clean_color(char *color);
char	*add_transparency(char *hex);
int		hex2int(char *hex);

//src/mlx_magic.c
void	magic(t_fdf *fdf);
void	mlx_call(t_fdf *fdf);

//src/draw.c
void	draw_fdf(t_fdf *fdf);
void	perspective(t_point *point);
t_point	create_point(int y, int x, t_fdf fdf);
void	bresenham(t_point first, t_point second, t_fdf *fdf);

//src/perspectives.c
void	top_view(t_point *point, t_fdf fdf);
void	isometric(t_point *point, t_fdf fdf);
void	front_view(t_point *point, t_fdf fdf);
/*void	rotation(t_point *point, t_fdf fdf);
t_point	rotate_z(t_point *point, t_fdf *fdf);
t_point	rotate_y(t_point *point, t_fdf *fdf);
t_point	rotate_x(t_point *point, t_fdf *fdf);*/

//src/utils.c
int		ft_abs(int i);
bool	inbound(t_point *check, t_fdf *fdf);
void	calc_factor(t_fdf *fdf);
void	calculate_factors(t_fdf *fdf);
/*void	find_min_max_z(t_fdf *fdf);*/

#endif
