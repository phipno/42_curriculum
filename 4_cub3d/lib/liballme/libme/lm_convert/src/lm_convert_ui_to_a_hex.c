/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_convert_i_to_a_hex.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:30:25 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 14:41:25 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen(), NULL, malloc()

static void	str_reverse(char *str_to_reverse)
{
	char	c_to_save;
	int		length;
	int		index;

	index = 0;
	if (str_to_reverse == NULL)
	{
		return ;
	}
	length = ft_strlen(str_to_reverse);
	while (index < length / 2)
	{
		c_to_save = str_to_reverse[index];
		str_to_reverse[index] = str_to_reverse[length - 1 - index];
		str_to_reverse[length - 1 - index] = c_to_save;
		index += 1;
	}
}

static int	get_digits(unsigned int uint_to_convert)
{
	int	index;

	index = 0;
	while (uint_to_convert > 0)
	{
		uint_to_convert = uint_to_convert / 16;
		index++;
	}
	return (index);
}

static char	*uint_to_string(unsigned int uint_to_convert, int flag_caps)
{
	unsigned int		uint_remain;
	char				*str_return;
	int					index;

	uint_remain = 0;
	index = 0;
	str_return = malloc (sizeof (char)
			* get_digits(uint_to_convert) + 1);
	if (str_return == NULL)
		return (NULL);
	while (uint_to_convert != 0)
	{
		uint_remain = uint_to_convert % 16;
		if (uint_remain < 10)
			str_return[index] = '0' + uint_remain;
		else if (uint_remain >= 10 && flag_caps <= 0)
			str_return[index] = 'a' + (uint_remain - 10);
		else if (uint_remain >= 10 && flag_caps > 0)
			str_return[index] = 'A' + (uint_remain - 10);
		uint_to_convert = uint_to_convert / 16;
		index++;
	}
	str_return[index] = '\0';
	return (str_return);
}

char	*lm_convert_ui_to_a_hex(unsigned int uint_to_convert, int flag_caps)
{
	char	*str_return;

	str_return = NULL;
	if (uint_to_convert == 0)
	{
		str_return = malloc(sizeof (char) * 2);
		str_return[0] = '0';
		str_return[1] = '\0';
		return (str_return);
	}
	str_return = uint_to_string(uint_to_convert, flag_caps);
	if (str_return == NULL)
		return (NULL);
	str_reverse(str_return);
	return (str_return);
}
