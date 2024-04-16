/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:55:10 by pnolte            #+#    #+#             */
/*   Updated: 2022/09/30 06:31:33 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int	ft_abs(int i)
{
	if (i > 0)
		i = -1 * i;
	return (i);
}

void	calculate_factors(t_fdf *fdf)
{
	fdf->origin[0] = 100;
	fdf->origin[1] = 1280;
	calc_factor(fdf);
	fdf->z_factor = 0.05;
}

bool	inbound(t_point *check, t_fdf *fdf)
{
	bool	boolean;
	int		i;

	i = 0;
	boolean = true;
	while (i < 3)
	{
		if (check[i].y > fdf->w_height)
			boolean = false;
		i++;
	}
	return (boolean);
}

void	calc_factor(t_fdf *fdf)
{
	t_point	check[3];
	bool	boolean;

	fdf->factor = 50;
	boolean = false;
	while (boolean == false)
	{
		check[0] = create_point(fdf->count_nl - 1, 0, *fdf);
		check[1] = create_point(0, fdf->length_x_map[fdf->count_nl - 1] - 1,
				*fdf);
		check[2] = create_point(fdf->count_nl - 1,
				fdf->length_x_map[fdf->count_nl - 1] - 1, *fdf);
		if (inbound(check, fdf) == false)
		{
			fdf->factor = fdf->factor - 1;
		}	
		if (inbound(check, fdf) == true)
			boolean = true;
	}
}
