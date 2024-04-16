/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:45:22 by jwillert          #+#    #+#             */
/*   Updated: 2023/06/28 08:23:52 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMAP_H
# define MINIMAP_H

/* -------------------------------------------------------------------------- */
//								includes
/* -------------------------------------------------------------------------- */

# include "MLX42.h"  // needed for mlx_image_t
# include <stdlib.h> // needed for size_t

/* -------------------------------------------------------------------------- */
//								macros
/* -------------------------------------------------------------------------- */

// start and end location of minimap (cornered) in pixel
# define START_X  10
# define START_Y  10

// modes for the minimap
# define MODE_OFF         0
# define MODE_CORNER      1
# define MODE_FULLSCREEN  2

// macros for game.map symbols
# define SYMBOL_FLOOR  '0'
# define SYMBOL_WALL   '1'
# define SYMBOL_EMPTY  ' '

// indexes for colour array in minimap.colours[5]
# define WHITE   0
# define BLACK   1
# define MAGENTA 2
# define YELLOW  3
# define GREEN   4

/* -------------------------------------------------------------------------- */
//								structs
/* -------------------------------------------------------------------------- */

/// @brief struct that contains two coordinates
/// @param double x
/// @param double y
typedef struct s_point
{
	double	x;
	double	y;
}			t_point;

/// @brief struct that contains information about a minimap_element that is
/// @brief being drawn
/// @param double size_x
/// @param double size_y
/// @param int32_t colour
typedef struct s_minimap_element
{
	double	size_x;
	double	size_y;
	int32_t	colour;
}				t_minimap_element;

/// @brief struct that contains information about the minimap.
/// @param t_point border_start
/// @param t_point border_end
/// @param t_point content_start
/// @param t_point content_end
/// @param t_minimap_element element
/// @param int32_t colours[5]
/// @param double offset_x
/// @param double offset_y
/// @param double size_x
/// @param double size_y
/// @param int player_x
/// @param int player_y
typedef struct s_minimap
{
	t_point				border_start;
	t_point				border_end;
	t_point				content_start;
	t_point				content_end;
	t_minimap_element	element;
	int32_t				colours[5];
	double				offset_x;
	double				offset_y;
	double				size_x;
	double				size_y;
	int					player_x;
	int					player_y;
}			t_minimap;

/* -------------------------------------------------------------------------- */
//								functions
/* -------------------------------------------------------------------------- */

//--------------------t_point
void	debug_print_t_point(char *name, t_point point);
void	point_set(t_point *point, int x, int y);
void	point_set_mid(t_point *mid, t_point a, t_point b);
void	point_draw_disc(mlx_image_t *image, t_point a, double diameter,
			int32_t colour);

//--------------------t_element
void	debug_print_t_element(char *name, t_minimap_element element);
void	element_set(t_minimap_element *element, size_t size_x, size_t size_y);
void	element_set_colour(t_minimap *minimap, char symbol);

//--------------------t_minimap
void	debug_print_t_minimap(char *name, t_minimap minimap);
void	minimap_init(t_minimap *minimap, size_t max_column, size_t max_line,
			int mode);
void	minimap_draw_element(mlx_image_t *image, size_t index_x,
			size_t index_y, t_minimap *minimap);
void	minimap_draw(char **map, mlx_image_t *image, t_minimap *minimap);

#endif // MINIMAP_H
