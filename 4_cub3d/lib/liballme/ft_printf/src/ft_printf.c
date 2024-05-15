/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:52:47 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 18:59:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>					// needed for ft_strlen()
#include <unistd.h>					// needed for write()
#include <lm_vec_str.h>				// needed for t_vec_str
#include <stdarg.h>					// needed for va_list, va_*()
#include <ft_printf_utils_str.h>	// needed for ft_if*()
#include <ft_printf_utils_nbr.h>	// needed for ft_if*()

static t_vec_str	*check_specifier(va_list args, char c,
	t_vec_str *vec)
{
	if (c == 'c')
		vec = ft_ifc(va_arg(args, int), vec);
	else if (c == 's')
		vec = ft_ifs(va_arg(args, char *), vec);
	else if (c == 'p')
		vec = ft_ifp(va_arg(args, void *), vec);
	else if (c == 'd' || c == 'i')
		vec = ft_ifdi(va_arg(args, int), vec);
	else if (c == 'u')
		vec = ft_ifu(va_arg(args, unsigned int), vec);
	else if (c == 'x')
		vec = ft_ifxlower(va_arg(args, unsigned int), vec);
	else if (c == 'X')
		vec = ft_ifxupper(va_arg(args, unsigned int), vec);
	else if (c == '%')
		vec = ft_ifperc(vec);
	return (vec);
}

static t_vec_str	*main_loop(va_list args, const char *input)
{
	int			index;
	t_vec_str	*output;

	index = 0;
	output = lm_vec_str_new("");
	if (output == NULL)
		return (NULL);
	while (input[index] != '\0')
	{
		if (input[index] == '%')
			output = check_specifier(args, input[++index], output);
		else if (input[index] != '\0')
			output = ft_ifc(input[index], output);
		index++;
	}
	return (output);
}

int	ft_printf(int fd, const char *input, ...)
{
	int			length;
	va_list		args;
	t_vec_str	*output;

	va_start(args, input);
	output = main_loop(args, input);
	va_end(args);
	if (output == NULL)
		return (1);
	length = ft_strlen(output->str);
	if (write(fd, output->str, length) == -1)
	{
		lm_vec_str_free(output);
		return (-1);
	}
	lm_vec_str_free(output);
	return (length);
}
