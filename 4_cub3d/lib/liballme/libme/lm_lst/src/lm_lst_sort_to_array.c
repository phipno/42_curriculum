/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_sort_to_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:40:29 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:30:47 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for NULL, t_lst, lm_lst_count_nodes(),
					// lm_lst_find_int_smallest(), lm_lst_delete_node(),
					// lm_lst_get_value(), malloc()

int	*lm_lst_sort_to_array(t_lst **lst_to_sort)
{
	int		int_smallest;
	size_t	count_nodes;
	int		*array;
	size_t	index;

	if ((*lst_to_sort) == NULL)
		return (NULL);
	count_nodes = lm_lst_count_nodes((*lst_to_sort));
	array = (int *) malloc (sizeof (int) * count_nodes);
	index = 0;
	while (count_nodes != 0)
	{
		int_smallest = lm_lst_find_int_smallest((*lst_to_sort));
		array[index] = int_smallest;
		lm_lst_delete_node(lst_to_sort,
			lm_lst_get_by_value((*lst_to_sort), int_smallest));
		index++;
		count_nodes--;
	}
	(*lst_to_sort) = NULL;
	return (array);
}
