/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:02:57 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:17:21 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for NULL, ft_strlen(), ft_substr(), ft_strrchr()
					// ft_strchr(), size_t

char	*ft_strtrim(char const *str_to_trim, char const *str_delimiter)
{
	size_t	start;
	size_t	end;
	char	*str_new;

	if (str_to_trim == NULL || str_delimiter == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(str_to_trim);
	while (str_to_trim[start] != '\0'
		&& ft_strchr(str_delimiter, str_to_trim[start]))
		start++;
	while (end > start && ft_strrchr(str_delimiter, str_to_trim[end - 1]))
		end--;
	str_new = ft_substr(str_to_trim, (unsigned int) start, end - start);
	if (str_new == NULL)
		return (NULL);
	return (str_new);
}
