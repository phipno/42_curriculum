/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_vec_str_join_delimiter.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:02:23 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:46:26 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_vec_str.h>	// needed for t_vec_str, lm_vec_str_join()
						// lm_vec_str_new()

t_vec_str	*lm_vec_str_join_delimiter(t_vec_str *vec_to_expand,
					char *str_delimiter, char *str_to_add)
{
	if (vec_to_expand == NULL)
	{
		return (lm_vec_str_new(str_to_add));
	}
	vec_to_expand = lm_vec_str_join(vec_to_expand, str_delimiter, 0);
	vec_to_expand = lm_vec_str_join(vec_to_expand, str_to_add, 0);
	return (vec_to_expand);
}
