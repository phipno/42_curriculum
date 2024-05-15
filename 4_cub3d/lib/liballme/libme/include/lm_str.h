/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:26:47 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/24 13:34:33 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LM_STR_H
# define LM_STR_H
# include <stdlib.h>	// needed for size_t

/// @brief 		Compares char for char of two strings and checks for a
///				difference in value
/// @param str_first
/// @param str_second
/// @return		First Difference in value or 0 if no difference was found
char	lm_str_cmp(const char *str_first, const char *str_second);

/// @brief		Checks if a char is present more than once in a string
/// @param str_to_check
/// @param c_to_check
/// @return		0 (False) or 1 (True)
char	lm_str_check_char_duplicate(const char *str_to_check, char c_to_check);

/// @brief		Checks a string for a specific char
/// @param str_to_search
/// @param char_to_find
/// @return 	0 (False) or 1 (True)
char	lm_str_check_char(const char *str_to_search, char char_to_find);

/// @brief		Checks if a string (haystack) contains another string (needle)
/// @param haystack
/// @param needle
/// @param length
/// @return 	0 (False) or 1 (True)
char	lm_str_check_needle(const char *haystack, const char *needle,
			size_t length);

/// @brief		Checks if a char from a set is present more than once in
///				a string
/// @param str_to_check
/// @param set_to_check
/// @return		0 (False) or 1 (True)
char	lm_str_check_set_duplicate(const char *str_to_check,
			const char *set_to_check);

/// @brief		Checks if at least one char of str_set is found
///				in str_to_check
/// @param str_to_check
/// @param str_set
/// @return 	0 (False) or 1 (True)
char	lm_str_check_set(const char *str_to_check, const char *str_set);

/// @brief		Checks for viable algebraic signs (must be followed by a digit,
///				only one before a number)
/// @param str_to_check
/// @return		0 (False) or 1 (True)
char	lm_str_check_viable_algebraic_signs(const char *str_to_check);

char	lm_str_check_viable_end(const char *str_to_check, const char *end);

/// @brief		Checks if the str_to_check contains a char that is not present
///				in the set (not viable)
/// @param str_to_check
/// @param str_set
/// @return		0 (False) or 1 (True)
char	lm_str_check_viable_set(const char *str_to_check, const char *str_set);

/// @brief		Counts the occasions of needle_a followed by needle_b or vice
///				versa in the haystack
/// @param haystack
/// @param needle_a
/// @param needle_b
/// @return		Size_t of the occasions
size_t	lm_str_count_needles_appended(const char *haystack,
			const char *needle_a, const char *needle_b);

/// @brief		Copies all instances of a set contained in str_to_search and
///				copies its values to a newly allocated string (with malloc)
/// @param str_to_search
/// @param str_set_to_find
/// @return		Newly allocated string or NULL
char	*lm_str_duplicate_set(char const *str_to_search,
			char const *str_set_to_find);

/// @brief 		Creates a string (with malloc) that is emtpy (only '\0')
/// @param
/// @return 	Newly allocated string or NULL
char	*lm_str_get_empty(void);

/// @brief 		Creates a newly allocated string that is str_first appended by
///				str_second with a delimiter in between
/// @param str_first
/// @param str_delimiter
/// @param str_second
/// @return 	Newly allocated string or NULL
char	*lm_str_join_delimiter(char *str_first, const char *str_delimiter,
			const char *str_second);

/// @brief 		Reverses the contents of a string in place
/// @param str_to_reverse
void	lm_str_reverse(char *str_to_reverse);

#endif	// LM_STR_H
