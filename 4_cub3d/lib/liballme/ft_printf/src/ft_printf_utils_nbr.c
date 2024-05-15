/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:04:19 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 18:53:04 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>			// needed for ft_itoa()
#include <lm_vec_str.h>		// needed for t_vec_str, lm_vec_str_*()
#include <lm_convert.h>		// needed for lm_convert_*()

t_vec_str	*ft_ifdi(int number, t_vec_str *vec)
{
	char	*string_to_add;

	string_to_add = ft_itoa(number);
	if (string_to_add == NULL)
		vec = lm_vec_str_join(vec, "(null)", 0);
	else
	{
		vec = lm_vec_str_join(vec, string_to_add, 0);
		free(string_to_add);
	}
	return (vec);
}

t_vec_str	*ft_ifu(unsigned int number, t_vec_str *vec)
{
	char	*string_to_add;

	string_to_add = lm_convert_ui_to_a(number);
	if (string_to_add == NULL)
		vec = lm_vec_str_join(vec, "(null)", 0);
	else
	{
		vec = lm_vec_str_join(vec, string_to_add, 0);
		free(string_to_add);
	}
	return (vec);
}

t_vec_str	*ft_ifxlower(unsigned int number, t_vec_str *vec)
{
	char	*string_to_add;

	string_to_add = lm_convert_ui_to_a_hex(number, 0);
	if (string_to_add == NULL)
		vec = lm_vec_str_join(vec, "(null)", 0);
	else
	{
		vec = lm_vec_str_join(vec, string_to_add, 0);
		free(string_to_add);
	}
	return (vec);
}

t_vec_str	*ft_ifxupper(unsigned int number, t_vec_str *vec)
{
	char	*string_to_add;

	string_to_add = lm_convert_ui_to_a_hex(number, 1);
	if (string_to_add == NULL)
		vec = lm_vec_str_join(vec, "(null)", 0);
	else
	{
		vec = lm_vec_str_join(vec, string_to_add, 0);
		free(string_to_add);
	}
	return (vec);
}
