/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_vec_str_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:21:41 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:49:34 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>		// needed for ft_strlen(), ft_strlcpy()
#include <lm_vec_str.h>	// needed for size_t, NULL, ft_strlen(), ft_strlcpy()

t_vec_str	*lm_vec_str_new(const char *str_to_add)
{
	t_vec_str	*vec_return;
	size_t		size_of_str;

	if (str_to_add == NULL)
	{
		return (NULL);
	}
	size_of_str = ft_strlen(str_to_add) + 1;
	vec_return = (t_vec_str *) malloc (sizeof(t_vec_str));
	vec_return->str = (char *) malloc ((sizeof (char) * size_of_str * 2));
	ft_strlcpy(vec_return->str, str_to_add, size_of_str);
	vec_return->size_used = size_of_str;
	vec_return->size_allocated = (size_of_str * 2);
	return (vec_return);
}
