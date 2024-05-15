/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_vec_str.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:54:44 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/24 10:34:55 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef LM_VEC_STR_H
# define LM_VEC_STR_H
# include <stdlib.h>	// needed for size_t

//	char 	*str;
//	size_t 	size_used;
//	size_t	size_allocated;
typedef struct s_vec
{
	char	*str;
	size_t	size_used;
	size_t	size_allocated;
}				t_vec_str;

/// @brief 	Adds a char to the end of a vector, if there is enough space.
///			If not it will allocate a new vector with the char added.
/// @param vec_to_expand
/// @param c_to_add
/// @return NULL on FAILURE, ptr to a vector on SUCESS
t_vec_str	*lm_vec_str_add_char(t_vec_str *vec_to_expand, char c_to_add);

/// @brief	Frees the str inside the vector and the vector itself
/// @param vec_to_free
void		lm_vec_str_free(t_vec_str *vec_to_free);

/// @brief 	Adds first the delimiter and then the new string to the end
///			of the vector
/// @param vec_to_expand
/// @param str_delimiter
/// @param str_to_add
/// @return NULL on FAILURE, ptr to vector on SUCCESS
t_vec_str	*lm_vec_str_join_delimiter(t_vec_str *vec_to_expand,
				char *str_delimiter, char *str_to_add);

/// @brief 	Adds a string to the end of the vector
/// @param vec_to_expand
/// @param str_to_add
/// @param size_to_add
/// @return NULL on FAILURE, ptr to vector on SUCCESS
t_vec_str	*lm_vec_str_join(t_vec_str *vec_to_expand, char *str_to_add,
				size_t size_to_add);

/// @brief 	Merges two vectors with each other separated with a delimiter
/// @param vec_to_merge_to
/// @param str_delimiter
/// @param vec_obsolete
/// @return NULL on FAILURE, ptr to merged vector on SUCCESS
t_vec_str	*lm_vec_str_merge_delimiter(t_vec_str *vec_to_merge_to,
				char *str_delimiter, t_vec_str *vec_obsolete);

/// @brief	Merges two vectors with each other
/// @param vec_to_merge_to
/// @param vec_merged
/// @return	NULL on FAILURE, ptr to merged vector on SUCCESS
t_vec_str	*lm_vec_str_merge(t_vec_str *vec_to_merge_to,
				t_vec_str *vec_merged);

/// @brief	Takes a string and allocates a vector struct
/// @param str_to_add
/// @return NULL on FAILURE, ptr to newly allocated vector on SUCCESS
t_vec_str	*lm_vec_str_new(const char *str_to_add);

#endif	// VEC_STR_H
