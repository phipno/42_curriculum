/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:59:51 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 13:57:18 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>	// needed for size_t

/* ************************************************************************** */
/* 								LIST RELATED								 */
/* ************************************************************************** */
//
//
//		void			*content;
//		struct s_lst	*next;
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
//
//
/// @brief 		Adds a new node to the back of a t_list
/// @param lst
/// @param node_to_add
void	ft_lstadd_back(t_list **lst, t_list *node_to_add);
//
//
/// @brief 		Adds a new node to the front of a t_list
/// @param lst
/// @param node_to_add
void	ft_lstadd_front(t_list **lst, t_list *node_to_add);
//
//
/// @brief 		Applies a function to every node.content of a t_list before
///				freeing all nodes. Does not free the ptr to the list!
/// @param lst
/// @param del
void	ft_lstclear(t_list **lst, void (*del)(void *));
//
//
/// @brief 		Applies a function to the node.content and frees it afterwards
/// @param lst
/// @param del
void	ft_lstdelone(t_list *lst, void (*del)(void *));
//
//
/// @brief		Applies a function to every node.content of a list
/// @param lst
/// @param f
void	ft_lstiter(t_list *lst, void (*f)(void *));
//
//
/// @brief 		Get the address of the last node of a t_list
/// @param lst
/// @return 	Pointer to the last node (no alloc)
t_list	*ft_lstlast(t_list *lst);
//
//
/// @brief 		Copies all nodes and nodes.content of a t_list while applying
///				a function to all nodes.content. If something wents wrong it
///				will clear and free all nodes and the list
/// @param lst
/// @param f
/// @param del
/// @return 	Pointer to the new t_list (with malloc)
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
//
//
/// @brief 		Creates a new node and changes node.content with *content
/// @param content
/// @return		Pointer to the new node (with malloc)
t_list	*ft_lstnew(void *content);
//
//
/// @brief 		Counts the amount of nodes in a t_list
/// @param lst
/// @return		Int of the t_list size
int		ft_lstsize(t_list *lst);
//
//
/* ************************************************************************** */
/* 								ASCII / Char Related						 */
/* ************************************************************************** */
//
//
/// @brief 		Checks if the value of the char to check is part of the ASCII
/// @param c_to_check
/// @return		True (1) or False (0)
int		ft_isascii(int c_to_check);
//
//
/// @brief 		Checks if the value of the char to check is either part of
///				the alphabet or a digit
/// @param c_to_check
/// @return
int		ft_isalnum(int c_to_check);
//
//
/// @brief 		Checks if the value of the char to check is part
///				of the alphabet
/// @param c_to_check
/// @return 	True (1) or False (0)
int		ft_isalpha(int c_to_check);
//
//
/// @brief		Checks if the value of the char to check is a digit
/// @param c_to_check
/// @return 	True (1) or False (0)
int		ft_isdigit(int c_to_check);
//
//
/// @brief 		Checks if the value of the char to check is printable (ASCII)
/// @param c_to_check
/// @return 	True (1) or False (0)
int		ft_isprint(int c_to_check);
//
//
/// @brief 		Changes an uppercase char to its lowercase version
/// @param c_to_change
/// @return		Lowercase version of char to change
int		ft_tolower(int c_to_change);
//
//
/// @brief 		Changes an lowercase char to its uppercase version
/// @param c_to_change
/// @return		Uppercase version of char to change
int		ft_toupper(int c_to_change);
//
//
/* ************************************************************************** */
/* 								STRING RELATED								 */
/* ************************************************************************** */
//
//
/// @brief 		Searches for the first occurence of char in a str
/// @param str_to_search
/// @param c_to_find
/// @return 	Pointer to the first occurence or NULL
char	*ft_strchr(const char *str_to_search, int c_to_find);
//
//
/// @brief 		Duplicates a string and its value
/// @param str_to_copy
/// @return 	Pointer to the Duplicate (with malloc)
char	*ft_strdup(const char *str_to_copy);
//
//
/// @brief 		Applies a function to every character of a string
/// @param str_to_iter
/// @param f
void	ft_striteri(char *str_to_iter, void (*f)(unsigned int, char *));
//
//
/// @brief 		Combines two strings with the combined values of str_first
///				and str_second appended
/// @param str_first
/// @param str_second
/// @return 	Pointer the newly allocated string (with malloc)
char	*ft_strjoin(char const *str_first, char const *str_second);
//
//
/// @brief 		Copies a specific amount of char from a string source to
///				the end of target string (including NULL termination
///				if there is room)
/// @param str_target
/// @param str_source
/// @param size_needed
/// @return 	Size_t of the combined string size
size_t	ft_strlcat(char *str_target, const char *str_source,
			size_t size_needed);
//
//
/// @brief 		Copies a specific amount of char from a string source to
///				a target string (including NULL termination if there is room)
/// @param str_target
/// @param str_source
/// @param size_needed
/// @return 	Size_t of the new string length
size_t	ft_strlcpy(char *str_target, const char *str_source,
			size_t size_needed);
//
//
/// @brief 		Counts the amount of characters in a string
/// @param str_to_count
/// @return 	Size_t of the string length
size_t	ft_strlen(const char *str_to_count);
//
//
/// @brief 		Iterates trough two strings and compares its char values until
///				the first difference is found for a specified amount of bytes
/// @param str_first
/// @param str_second
/// @param bytes
/// @return 	Int value of the first difference found
int		ft_strncmp(const char *str_first, const char *str_second, size_t bytes);
//
//
/// @brief 		Searches for the first occurence of a string (needle) in another
///				string (haystack) for a specific amount of bytes to be searched
/// @param haystack
/// @param needle
/// @param length
/// @return 	Pointer to the first occurence
char	*ft_strnstr(const char *haystack, const char *needle, size_t length);
//
//
/// @brief 		Applies a function to every character of a duplicated string
/// @param str_to_map
/// @param f
/// @return 	Pointer to the newly allocated duplicate (with malloc)
char	*ft_strmapi(char const *str_to_map, char (*f)(unsigned int, char));
//
//
/// @brief 		Searches for the last occurence of a char in a string
///				(Iterating backwards)
/// @param str_to_search
/// @param c_to_find
/// @return 	Pointer to the last occurence
char	*ft_strrchr(const char *str_to_search, int c_to_find);
//
//
/// @brief 		Removes any char in a duplicated string (string to trim) out
///				of a set of char (string delimiter)
/// @param str_to_trim
/// @param str_delimiter
/// @return		Pointer to the newly allocated duplicate (with malloc)
char	*ft_strtrim(char const *str_to_trim, char const *str_delimiter);
//
//
/// @brief 		Duplicates a specific amount of char in a string starting at
///				offset (unsigned int start) for (size_t) length
/// @param str_source
/// @param start
/// @param length
/// @return 	Pointer to the newly allocated duplicate (with malloc)
char	*ft_substr(char const *str_source, unsigned int start, size_t length);
//
//
/* ************************************************************************** */
/* 								MEMORY RELATED								 */
/* ************************************************************************** */
//
//
/// @brief 		Set the amount of bytes of memory values pointed to to 0
/// @param ptr
/// @param bytes
void	ft_bzero(void *ptr, size_t bytes);
//
//
/// @brief 		Allocates a specific size (count * bytes) and sets all memory
///				values to 0 with help of bzero
/// @param count
/// @param bytes
/// @return
void	*ft_calloc(size_t count, size_t bytes);
//
//
/// @brief 		Searches for the first occurence of a memory value for an
///				amount of bytes pointed to by pointer to search
/// @param ptr_to_search
/// @param c_to_find
/// @param bytes
/// @return 	Pointer to the first occurence
void	*ft_memchr(const void *ptr_to_search, int c_to_find, size_t bytes);
//
//
/// @brief		Compares the memory values of two pointers for an
///				specific amount of bytes
/// @param str_first
/// @param str_second
/// @param bytes
/// @return		Int of first found difference in memory value
int		ft_memcmp(const void *str_first, const void *str_second, size_t bytes);
//
//
/// @brief		Copies a specific amount of bytes of memory values of pointer
///				source to the memory region pointed to by pointer destination
/// @param ptr_dst
/// @param ptr_src
/// @param bytes
/// @return		Pointer to destination
void	*ft_memcpy(void *ptr_dst, const void *ptr_src, size_t bytes);
//
//
/// @brief		Copies a specific amount of bytes of memory values pointed to
///				by pointer source to the memory area pointed to by pointer
///				destination while handling possible overlapping
/// @param ptr_dst
/// @param ptr_src
/// @param length
/// @return		Pointer to destination
void	*ft_memmove(void *ptr_dst, const void *ptr_src, size_t length);
//
//
/// @brief		Set the amount of bytes of an memory region pointed to a
///				to a specific value
/// @param ptr
/// @param c_value
/// @param bytes
/// @return		Pointer to the memory region
void	*ft_memset(void *ptr, int c_value, size_t bytes);
//
//
/* ************************************************************************** */
/* 								TYPE CONVERSION								 */
/* ************************************************************************** */
//
//
/// @brief 		Removes white spaces and algebraic signs in front of a number
///				in a string and convert the number to its int representation
///				while handling possible overflowing with  MIN_INT and MAX_INT
/// @param str_to_convert
/// @return 	Integer version of the number or 0 if it fails
///				(bad error handling!)
int		ft_atoi(const char *str_to_convert);
//
//
/// @brief 		Convert an integer to a string
/// @param int_to_convert
/// @return 	Pointer to the newly allocated string (with malloc)
char	*ft_itoa(int int_to_convert);
//
//
/// @brief 		Splits a string and converts it to an array of string by
///				splitting it with a char delimiter (e.g. ',')
/// @param str_to_split
/// @param c_delimiter
/// @return		Pointer to the newly allocated array (with malloc)
char	**ft_split(char const *str_to_split, char c_delimiter);
//
//
/* ************************************************************************** */
/* 								PRINT TO FD								 */
/* ************************************************************************** */
//
//
/// @brief 		Prints a char to a file descriptor
/// @param c_to_print
/// @param fd
void	ft_putchar_fd(char c_to_print, int fd);
//
//
/// @brief 		Prints a string to a file descriptor followed by a new line
/// @param str_to_print
/// @param fd
void	ft_putendl_fd(char *str_to_print, int fd);
//
//
/// @brief 		Prints an int to a file descriptor
/// @param int_to_print
/// @param fd
void	ft_putnbr_fd(int int_to_print, int fd);
//
//
/// @brief 		Prints a string to a file descriptor
/// @param str_to_print
/// @param fd
void	ft_putstr_fd(char *str_to_print, int fd);

#endif	//	LIBFT_H
