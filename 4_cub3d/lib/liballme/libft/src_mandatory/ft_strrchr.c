/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:47:05 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:16:48 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen(), NULL

char	*ft_strrchr(const char *str_to_search, int c_to_find)
{
	int		index;
	char	*ptr_to_c;

	index = 0;
	ptr_to_c = (char *)str_to_search;
	if ((char)c_to_find == '\0')
		return (ptr_to_c + ft_strlen(str_to_search));
	while (*ptr_to_c != '\0')
	{
		ptr_to_c++;
		index++;
	}
	while (index >= 0)
	{
		if (*ptr_to_c == (char)c_to_find)
			return (ptr_to_c);
		ptr_to_c--;
		index--;
	}
	return (NULL);
}
