/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_calculate_average.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:55:04 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:04:18 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst

long	lm_lst_calculate_average(t_lst *lst_to_calculate)
{
	long	average;
	long	sum;
	size_t	count_nodes;

	average = 0;
	sum = lm_lst_calculate_sum(lst_to_calculate);
	count_nodes = lm_lst_count_nodes(lst_to_calculate);
	average = sum / (long) count_nodes;
	return (average);
}
