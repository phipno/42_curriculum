/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:31:59 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 18:56:33 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_vec_str.h>	// needed for t_vec_str, lm_vec_str_*()
#include <lm_convert.h>	// needed for lm_convert_p_to_a()
#include <ft_printf_utils_str.h> // needed for ft_if*()

t_vec_str	*ft_ifc(char c_to_add, t_vec_str *vec)
{
	vec = lm_vec_str_add_char(vec, c_to_add);
	return (vec);
}

t_vec_str	*ft_ifs(char *string_to_add, t_vec_str *vec)
{
	if (string_to_add == NULL)
		vec = lm_vec_str_join(vec, "(null)", 0);
	else
		vec = lm_vec_str_join(vec, string_to_add, 0);
	return (vec);
}

t_vec_str	*ft_ifp(void *pointer, t_vec_str *vec)
{
	char	*string_to_add;

	string_to_add = lm_convert_p_to_a(pointer);
	if (string_to_add == NULL)
		vec = lm_vec_str_join(vec, "(null)", 0);
	else
	{
		vec = lm_vec_str_join(vec, string_to_add, 0);
		free(string_to_add);
	}
	return (vec);
}

t_vec_str	*ft_ifperc(t_vec_str *vec)
{
	vec = ft_ifc('%', vec);
	return (vec);
}
