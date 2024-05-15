/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_vec_str_merge.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:33:31 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 20:17:48 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_vec_str.h>	// needed for t_vec_str, NULL, lm_vec_str_free()

t_vec_str	*lm_vec_str_merge(t_vec_str *vec_to_merge_to, t_vec_str *vec_merged)
{
	if (vec_to_merge_to == NULL)
	{
		return (vec_merged);
	}
	if (vec_merged == NULL)
	{
		return (vec_to_merge_to);
	}
	vec_to_merge_to = lm_vec_str_join(vec_to_merge_to, vec_merged->str, 0);
	lm_vec_str_free(vec_merged);
	return (vec_to_merge_to);
}
