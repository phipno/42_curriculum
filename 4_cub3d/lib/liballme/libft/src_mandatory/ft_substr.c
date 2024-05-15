/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:31:57 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:17:43 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen(), NULL, ft_strlcpy(), malloc()

char	*ft_substr(char const *str_source, unsigned int start, size_t length)
{
	char	*str_new;

	if (str_source == NULL)
		return (NULL);
	if (length > ft_strlen(str_source + start))
		length = ft_strlen(str_source + start);
	str_new = (char *) malloc(sizeof (char) * (length + 1));
	if (str_new == NULL)
		return (NULL);
	if (start > ft_strlen(str_source))
	{
		str_new[0] = '\0';
		return (str_new);
	}
	ft_strlcpy(str_new, str_source + start, length + 1);
	return (str_new);
}
