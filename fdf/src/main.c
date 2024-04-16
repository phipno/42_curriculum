/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:23:19 by pnolte            #+#    #+#             */
/*   Updated: 2022/10/03 12:06:22 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	my_exit(int status)
{
	exit(status);
}

void	freeee(t_fdf *fdf)
{
	int	y;
	int	x;

	y = 0;
	while (fdf->map[y] != NULL)
	{
		x = 0;
		while (fdf->map[y][x].end_of_x != '\n')
		{
			free(fdf->map[y][x].color);
			x++;
		}
		free(fdf->map[y]);
		y++;
	}
	free(fdf->map);
	free(fdf->length_x_map);
}

void	freeee_split(char **split)
{
	int	i;

	i = 1;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	main(int argc, char **argv)
{
	t_fdf	fdf;

	if (argc < 2 || argc > 2)
	{
		if (argc < 2)
			ft_printf("ERROR: no path to file");
		else
			ft_printf("ERROR: to many arguments");
		return (EXIT_FAILURE);
	}
	init_map(&fdf, argv);
	mlx_call(&fdf);
	freeee(&fdf);
	return (EXIT_SUCCESS);
}
