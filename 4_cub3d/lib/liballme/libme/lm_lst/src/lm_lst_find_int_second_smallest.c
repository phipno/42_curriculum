/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_find_int_second_smallest.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:21:19 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:28 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for NULL, t_lst

int	lm_lst_find_int_second_smallest(t_lst *lst_to_search)
{
	int	int_second_smallest;
	int	int_smallest;

	if (lst_to_search == NULL || lst_to_search->next == NULL)
		return (0);
	int_smallest = lm_lst_find_int_smallest(lst_to_search);
	int_second_smallest = lst_to_search->content;
	while (lst_to_search != NULL)
	{
		if (int_second_smallest > lst_to_search->content
			&& lst_to_search->content != int_smallest)
			int_second_smallest = lst_to_search->content;
		lst_to_search = lst_to_search->next;
	}
	return (int_second_smallest);
}
