/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_find_shortest_path.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:21:30 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:38 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for NULL, t_lst, lm_lst_count_iterations()

int	lm_lst_find_shortest_path(t_lst *lst_index, t_lst *lst_dest_up,
		t_lst *lst_dest_down)
{
	size_t	iterations_up;
	size_t	iterations_down;

	if (lst_index == NULL)
		return (0);
	if (lst_dest_up == NULL && lst_dest_down != NULL)
	{
		iterations_down = lm_lst_count_iterations(lst_index,
				lst_dest_down);
		return ((int) iterations_down);
	}
	if (lst_dest_down == NULL && lst_dest_up != NULL)
	{
		iterations_up = lm_lst_count_iterations(lst_dest_up, lst_index);
		return (((int) iterations_up) * -1);
	}
	iterations_up = lm_lst_count_iterations(lst_dest_up, lst_index);
	iterations_down = lm_lst_count_iterations(lst_index, lst_dest_down) + 1;
	if (iterations_down < iterations_up)
		return ((int) iterations_down);
	else if (iterations_up < iterations_down)
		return (((int) iterations_up) * -1);
	else if (iterations_down == iterations_up)
		return ((int) iterations_up * -1);
	return (0);
}
