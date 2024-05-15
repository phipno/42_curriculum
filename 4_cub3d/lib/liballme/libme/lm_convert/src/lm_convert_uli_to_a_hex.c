/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_convert_uli_to_a_hex.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:30:25 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 18:39:14 by jwillert         ###   ########.fr       */
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

static int	get_digits(unsigned long int int_to_convert)
{
	int	index;

	index = 0;
	while (int_to_convert > 0)
	{
		int_to_convert = int_to_convert / 16;
		index++;
	}
	return (index);
}

static char	*ulint_to_string(unsigned long int int_to_convert,
				int flag_caps)
{
	unsigned long int	int_remain;
	char				*string_return;
	int					index;

	int_remain = 0;
	string_return = NULL;
	index = 0;
	string_return = malloc (sizeof (char)
			* get_digits(int_to_convert) + 1);
	if (string_return == NULL)
		return (NULL);
	while (int_to_convert != 0)
	{
		int_remain = int_to_convert % 16;
		if (int_remain < 10)
			string_return[index] = '0' + int_remain;
		else if (int_remain >= 10 && flag_caps <= 0)
			string_return[index] = 'a' + (int_remain - 10);
		else if (int_remain >= 10 && flag_caps > 0)
			string_return[index] = 'A' + (int_remain - 10);
		int_to_convert = int_to_convert / 16;
		index++;
	}
	string_return[index] = '\0';
	return (string_return);
}

char	*lm_convert_uli_to_a_hex(unsigned long int int_to_convert,
					int flag_caps)
{
	char	*string_return;

	string_return = NULL;
	if (int_to_convert == 0)
	{
		string_return = malloc(sizeof (char) * 2);
		string_return[0] = '0';
		string_return[1] = '\0';
		return (string_return);
	}
	string_return = ulint_to_string(int_to_convert, flag_caps);
	if (string_return == NULL)
		return (NULL);
	str_reverse(string_return);
	return (string_return);
}
