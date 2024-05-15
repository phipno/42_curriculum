/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:02:32 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:14:44 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for NULL, ft_strdup(), ft_strlen(), ft_strlcpy()
					// needed for ft_strlcat()

char	*ft_strjoin(char const *str_first, char const *str_second)
{
	char	*str_new;
	size_t	size;

	if (str_first == NULL || str_second == NULL)
	{
		return (NULL);
	}
	if (*str_second == '\0')
	{
		return (ft_strdup(str_first));
	}
	size = ft_strlen(str_first) + ft_strlen(str_second) + 1;
	str_new = (char *) malloc (size * sizeof (char));
	if (str_new == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(str_new, str_first, size);
	ft_strlcat(str_new, str_second, size);
	return (str_new);
}
