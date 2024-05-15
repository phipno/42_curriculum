/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_convert.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:24:26 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/24 10:36:52 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef LM_CONVERT_H
# define LM_CONVERT_H

/// @brief 		Converts an array of strings into one string (with malloc)
/// @param array_to_convert
/// @return 	Newly allocated string or NULL
char		*lm_convert_array_str_to_a(char **array_to_convert);

/// @brief		Converts a string into a float. Uses double as a data type to
///				throw an error if either string is NULL (LDBL_MIN) or if an
///				error is found in parsing or to prevent an overflow (LDBL_MAX)
/// @param str_to_convert
/// @return		double representation of string (Type cast for float!)
long double	lm_convert_a_to_ld(char *str_to_convert);

/// @brief		Converts a string into its int representation. Uses long int
///				as a data type to throw an error if either string is NULL
///				(LONG_MIN) or to prevent an overflow (LONG_MAX)
/// @param str_to_convert
/// @return 	Long int representation of string
long int	lm_convert_a_to_li(char *str_to_convert);

/// @brief 		Converts a char to a string (with malloc)
/// @param c_to_convert
/// @return 	Newly allocated string or NULL
char		*lm_convert_c_to_a(char c_to_convert);

/// @brief 		Converts an unsigned long int (address of a ptr) into a
///				hexadecimal string (with malloc) either in lowercase (flag 0)
///				or uppercase (flag 1)
/// @param ulint_to_convert
/// @param flag_caps
/// @return 	Newly allocated string or NULL
char		*lm_convert_ui_to_a_hex(unsigned int uint_to_convert,
				int flag_caps);

/// @brief		Converts the address of a pointer into a hexadecimal string
///				(with malloc)
/// @param ptr
/// @return 	Pointer to the newly allocated string or NULL
char		*lm_convert_p_to_a(void *ptr);

/// @brief 		Converts an unsigned int into a string (with malloc)
/// @param uint_to_convert
/// @return 	Newly allocated string or NULL
char		*lm_convert_ui_to_a(unsigned int uint_to_convert);

/// @brief		Converts an unsigned long int to a hexadecimal string
///				(with malloc) either in lowercase (flag 0) or uppercase (flag 1)
/// @param int_to_convert
/// @param flag_caps
/// @return
char		*lm_convert_uli_to_a_hex(unsigned long int int_to_convert,
				int flag_caps);

/// @brief		Converts an unsigned long int into a string (with malloc)
/// @param int_to_convert
/// @return		Newly allocated string or NULL
char		*lm_convert_uli_to_a(unsigned long int int_to_convert);

#endif	// LM_CONVERT_H
