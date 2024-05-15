/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_convert_p_to_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:03:26 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 14:57:59 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>		// needed for ft_strjoin(), NULL, malloc()
#include <lm_convert.h>	// needed for lm_convert_li_to_a_hex()

char	*lm_convert_p_to_a(void *ptr)
{
	char	*str_return;
	char	*str_ptr_address;

	str_ptr_address = NULL;
	str_return = NULL;
	if (ptr == NULL)
	{
		str_ptr_address = ft_strdup("0");
		if (str_ptr_address == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		str_ptr_address = lm_convert_ui_to_a_hex(
				(unsigned long) ptr, 0);
		if (str_ptr_address == NULL)
		{
			return (NULL);
		}
	}
	str_return = ft_strjoin("0x", str_ptr_address);
	free(str_ptr_address);
	return (str_return);
}
