/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stuff_with_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:31:12 by pnolte            #+#    #+#             */
/*   Updated: 2022/10/03 12:01:46 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

/*
finds where the color starts, at 0x, where it ends normaly after 10,
and where the end_of_line or new_line character is
*/

void	color_start_and_end(char *color, int *j, int *i, int *size)
{
	*j = 0;
	while ((color[*j] != '0' && color [*j + 1] != 'x')
		&& color [*j] != '\0')
		(*j)++;
	*size = *j;
	while ((color[*size] != '\0' && color[*size] != '\n'
			&& *size <= 8))
		(*size)++;
	*i = 0;
	while (color[*i] != '\n' && color[*i] != '\0')
		(*i)++;
}

/*
splits the color from the z-coordinates/height and then cleans and transform
the color in the right input. Cause of MLX42 we need and 
0xFF8912AA
0x - representation of hexdecimal base system
FF - Red Channel
89 - Blue Channel
12 - Green Channel
AA - Alpha Channel
*/

char	*init_color(t_fdf *fdf, int y, int x, char *split)
{
	char	**nbr_color;
	int		end;
	int		start;
	int		size;
	int		i;

	i = 0;
	while (split[i] != ',' && split[i] != '\0')
		i++;
	if (i != 0 && split[i + 1] != '\0')
	{
		nbr_color = ft_split(split, ',');
		color_start_and_end(nbr_color[1], &start, &end, &size);
		if (nbr_color[1][end] == '\n')
			fdf->map[y][x + 1].end_of_x = '\n';
		fdf->map[y][x].color = ft_substr(nbr_color[1], start, size + 1);
		fdf->map[y][x].color = clean_color(fdf->map[y][x].color);
		fdf->map[y][x].color = add_transparency(fdf->map[y][x].color);
		free(split);
		split = nbr_color[0];
		freeee_split(nbr_color);
	}
	return (split);
}

/*
cleans the color from any unwanted character
*/

char	*clean_color(char *color)
{
	int		i;

	i = 2;
	while (color[i] != '\0')
	{
		if ((color[i] < '0' || color[i] > '9')
			&& (color[i] < 'A' || color[i] > 'F')
			&& (color[i] < 'a' || color[i] > 'f'))
			color[i] = '0';
		i++;
	}
	return (color);
}

/*
get current character then increment
transform hex character to the 4bit equivalent number, 
using the ascii table indexes
shift 4 to make space for new digit, and add the 4 bits of the new digit 
*/

int	hex2int(char *hex)
{
	int	val;
	int	byte;

	val = 0;
	if (hex == NULL)
		return (0xFFFFFFFF);
	while (*hex)
	{
		byte = *hex++;
		if (byte >= '0' && byte <= '9')
			byte = byte - '0';
		else if (byte >= 'a' && byte <= 'f')
			byte = byte - 'a' + 10;
		else if (byte >= 'A' && byte <= 'F')
			byte = byte - 'A' + 10;
		val = (val << 4) | (byte & 0xF);
	}
	return (val);
}

/*
the new MLX42 handles color a little bit different than the old one
so i needed to add the transparency channel at the end if its not existing
*/

char	*add_transparency(char *color)
{
	char	*clean_color;
	int		i;

	clean_color = ft_calloc(sizeof(char), 11);
	if (clean_color == NULL)
		my_exit(1);
	clean_color[10] = '\0';
	ft_strlcpy(clean_color, color, ft_strlen(color));
	i = 0;
	while (i < 10)
	{
		if (clean_color[i] == '\0')
			clean_color[i] = '0';
		if (ft_strlen(color) < 10 && i == 8)
		{
			clean_color[i] = 'F';
			clean_color[i + 1] = 'F';
		}	
		i++;
	}
	free(color);
	return (clean_color);
}
