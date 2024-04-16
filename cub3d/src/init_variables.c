/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_variables.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:09:49 by pnolte            #+#    #+#             */
/*   Updated: 2023/06/28 07:51:42 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> //open
#include <stdio.h> //perror

#include "libft.h"
#include "cub3d.h"
#include "lm_array_str.h"

char	*sub_str_walls(const char *str)
{
	int		i;
	int		fd;
	char	*path_to_wall;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '.' && str[i] != '\0')
		i++;
	path_to_wall = ft_substr(str, i, ft_strlen(str));
	fd = open(path_to_wall, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("Open \"", 2);
		ft_putstr_fd((char *)str, 2);
		ft_putstr_fd("\" : ", 2);
		perror("");
		cub_exit(EXIT_FAILURE, STDERR_FILENO, "Textures: Wall textures!");
	}
	close(fd);
	return (path_to_wall);
}

char	*ide_search(char **c_s, char *search)
{
	char	*needle;
	int		i;

	i = 0;
	needle = NULL;
	while (c_s[i] != NULL)
	{
		needle = ft_strnstr(c_s[i], search, ft_strlen(c_s[i]));
		if (needle != NULL)
			return (needle);
		i++;
	}
	return (needle);
}

void	split_that_color(t_rgba *color, const char *str)
{
	int		i;
	char	*sub;
	char	**split;

	i = 0;
	if (str == NULL)
		cub_exit(1, 2, "Map: No Color found");
	while (ft_isdigit(str[i]) == 0 && str[i] != '\0')
	{
		if (str[i] == '-')
			cub_exit(1, 2, "Map: Negative numbers found!");
		i++;
	}
	sub = ft_substr(str, i, ft_strlen(str));
	split = ft_split(sub, ',');
	free(sub);
	i = 0;
	while (split[i] != NULL)
		i++;
	if (i < 3)
		cub_exit(EXIT_FAILURE, STDERR_FILENO,
			"Map: Color values missing");
	color->colour = cub_get_rgba(ft_atoi(split[0]),
			ft_atoi(split[1]), ft_atoi(split[2]), 255);
	lm_array_str_free(split);
}

static void	player_if_if(t_all *cub, int x, int y, bool *only_one)
{
	if (*only_one == true)
		cub_exit(EXIT_FAILURE, STDERR_FILENO,
			"Map: Too many spawns in map file");
	if (cub->map.a_map[y][x] == 'N')
		cub->per.dir = 270;
	if (cub->map.a_map[y][x] == 'E')
		cub->per.dir = 0;
	if (cub->map.a_map[y][x] == 'S')
		cub->per.dir = 90;
	if (cub->map.a_map[y][x] == 'W')
		cub->per.dir = 180;
	cub->per.start_pos.x = x + 0.5;
	cub->per.start_pos.y = y + 0.5;
	*only_one = true;
}

void	get_player_start(t_all *cub)
{
	int		x;
	int		y;
	bool	only_one;

	y = 0;
	only_one = false;
	while (cub->map.a_map[y] != NULL)
	{
		x = 0;
		while (cub->map.a_map[y][x] != '\0')
		{
			if (cub->map.a_map[y][x] == 'N' || cub->map.a_map[y][x] == 'E'
				|| cub->map.a_map[y][x] == 'S' || cub->map.a_map[y][x] == 'W')
				player_if_if(cub, x, y, &only_one);
			x++;
		}
		y++;
	}
	if (only_one == false)
		cub_exit(EXIT_FAILURE, STDERR_FILENO, "Map: No spawning point found");
}

/* ************************************************************************** */
