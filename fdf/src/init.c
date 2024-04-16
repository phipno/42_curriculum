/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:23:32 by pnolte            #+#    #+#             */
/*   Updated: 2022/10/03 11:32:33 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	count_nl(t_fdf *fdf)
{
	char	*buff;
	int		bytes_read;
	int		i;

	bytes_read = 1;
	fdf->count_nl = 0;
	buff = malloc(sizeof(char) * 1000);
	if (buff == NULL)
		my_exit(EXIT_FAILURE);
	while (bytes_read != 0)
	{
		i = 0;
		bytes_read = read(fdf->fd, buff, 1000);
		while (i < bytes_read && buff[i] != '\0')
		{
			if (buff[i] == '\n')
				fdf->count_nl++;
			i++;
		}
	}
	free(buff);
}

int	how_many_splits(char **split)
{
	int	count;
	int	j;

	j = 0;
	count = 1;
	while (split[j] != NULL)
	{
		if (ft_strchr(split[j], '\n') && split[j][0] != '\n')
			count++;
		count++;
		j++;
	}
	return (count);
}

/*
this is some input parsing problem solving
the insert_z function accounts for the all possibilities where the new_lines
are. Because it could be that a new_line character could be inside a string
or could be alone.
Then it transforms the z-coordinate to an integer with atoi.
*/

void	insert_z(t_fdf *fdf, int y, char **split)
{
	int		x;

	x = 0;
	while (split[x] != NULL)
	{
		fdf->map[y][x].color = NULL;
		if (ft_strchr(split[x], ','))
			split[x] = init_color(fdf, y, x, split[x]);
		if (split[x][0] == '\n')
		{
			fdf->map[y][x].end_of_x = '\n';
			free(split[x]);
		}	
		else if (ft_strchr(split[x], '\n'))
		{
			fdf->map[y][x].z = ft_atoi(split[x]);
			fdf->map[y][x + 1].end_of_x = '\n';
			fdf->map[y][x + 1].existing = '\n';
		}
		else
			fdf->map[y][x].z = ft_atoi(split[x]);
		fdf->map[y][x].existing = 'y';
		x++;
	}
}

/*
1. we get the information from our text file through get_next_line and split
2. counts how many X-coordinates we gonna have in each Y-coordinate, 
->jagged array
3.saves that number in fdf->length_x_map for later purpose
4.saves the height number
*/

void	parsing(t_fdf *fdf)
{
	char	*gnl;
	char	**split;
	int		y;
	int		count_x;

	y = 0;
	while (y < fdf->count_nl)
	{
		gnl = get_next_line(fdf->fd);
		split = ft_split(gnl, ' ');
		count_x = how_many_splits(split);
		fdf->map[y] = ft_calloc(count_x, sizeof(t_coord));
		if (fdf->map == NULL)
			my_exit(EXIT_FAILURE);
		fdf->length_x_map[y] = count_x;
		insert_z(fdf, y, split);
		y++;
		free(split);
		free(gnl);
	}
	fdf->map[y] = NULL;
}

/*
1.counts the new_lines in the text.fdf file
2. allocates the number of new_lines for the Y-coordinates in map double array
3. allocates a length_x_map because we gonna have a jagged array and i need 
each number of each Y-array size, thats gonna be saved there
4.in function parsing we inserting the integer for the height and the color if
it exists, else NULL in the corresponding Y|X - coordinate and we
*/

void	init_map(t_fdf *fdf, char **argv)
{
	fdf->fd = open(argv[1], O_RDONLY);
	if (fdf->fd < 0)
	{
		ft_printf("ERROR: file doesn't exist");
		my_exit(EXIT_FAILURE);
	}
	count_nl(fdf);
	if (close(fdf->fd) != 0)
		my_exit(EXIT_FAILURE);
	fdf->map = ft_calloc(fdf->count_nl + 1, sizeof(t_coord));
	if (fdf->map == NULL)
		my_exit(EXIT_FAILURE);
	fdf->length_x_map = ft_calloc(fdf->count_nl, sizeof(int));
	if (fdf->map == NULL)
		my_exit(EXIT_FAILURE);
	fdf->fd = open(argv[1], O_RDONLY);
	parsing(fdf);
	if (close(fdf->fd) != 0)
		my_exit(EXIT_FAILURE);
}
