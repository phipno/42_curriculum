/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_vec_str_merge_delimiter.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:41:49 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 19:41:51 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_vec_str.h>	// needed for t_vec_str, NULL, lm_vec_str_join()
						// lm_vec_str_free()

t_vec_str	*lm_vec_str_merge_delimiter(t_vec_str *vec_to_merge_to,
					char *str_delimiter, t_vec_str *vec_obsolete)
{
	if (vec_to_merge_to == NULL)
	{
		return (vec_obsolete);
	}
	vec_to_merge_to = lm_vec_str_join(vec_to_merge_to,
			str_delimiter, 0);
	vec_to_merge_to = lm_vec_str_join(vec_to_merge_to,
			vec_obsolete->str, 0);
	lm_vec_str_free(vec_obsolete);
	return (vec_to_merge_to);
}
