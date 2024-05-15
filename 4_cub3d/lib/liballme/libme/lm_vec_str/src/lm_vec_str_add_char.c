/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_vec_str_add_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:30:51 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:46:20 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>		// needed for ft_isascii(), NULL
#include <lm_vec_str.h>	// needed for t_vec_str, lm_vec_str_join()

t_vec_str	*lm_vec_str_add_char(t_vec_str *vec_to_expand, char c_to_add)
{
	t_vec_str		*vec_return;
	size_t			size_to_add;
	char			str_to_add[2];

	if (vec_to_expand == NULL)
	{
		return (NULL);
	}
	if (ft_isascii(c_to_add) == 0)
	{
		return (vec_to_expand);
	}
	size_to_add = 2;
	if (vec_to_expand->size_used + size_to_add
		<= vec_to_expand->size_allocated)
	{
		vec_to_expand->str[vec_to_expand->size_used - 1] = c_to_add;
		vec_to_expand->str[vec_to_expand->size_used] = '\0';
		vec_to_expand->size_used = vec_to_expand->size_used + 1;
		return (vec_to_expand);
	}
	str_to_add[0] = c_to_add;
	str_to_add[1] = '\0';
	vec_return = lm_vec_str_join(vec_to_expand, str_to_add, 0);
	return (vec_return);
}
