/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:04:05 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:15:48 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for NULL, ft_strlen(), malloc()

char	*ft_strmapi(char const *str_to_map, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*str_new;

	index = 0;
	if (str_to_map == NULL)
		return (NULL);
	str_new = (char *) malloc (ft_strlen(str_to_map) * sizeof (char) + 1);
	if (str_new == NULL)
		return (NULL);
	while (str_to_map[index] != '\0')
	{
		str_new[index] = f(index, str_to_map[index]);
		index++;
	}
	str_new[index] = '\0';
	return (str_new);
}
