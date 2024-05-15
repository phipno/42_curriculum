/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_str.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:58:41 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 18:57:24 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_STR_H
# define FT_PRINTF_UTILS_STR_H
# include <lm_vec_str.h>	// needed for t_vec_str

//	takes char c and (output-)length and prints like 'c'
//	the char to ouput | returns new length
t_vec_str	*ft_ifc(char c_to_add, t_vec_str *vec);
//	takes char *str and (output-)length and prints like 's'
//	the va_arg to output with ft_putstr
//	prints string or (null) | returns new length
t_vec_str	*ft_ifs(char *string_to_add, t_vec_str *vec);
//	takes void *ptr and (output-)length and prints like 'p'
//	the address of va_arg in hexadecimal_lowercase
//	uses ft_get_ptr_address | returns new length
t_vec_str	*ft_ifp(void *pointer, t_vec_str *vec);
//	takes char '%' and (output-)length and prints like 'c'
//	the char to ouput | returns new length
t_vec_str	*ft_ifperc(t_vec_str *vec);

#endif	//	FT_PRINTF_UTILS_STR_H
