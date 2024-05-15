/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:11:57 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/24 10:39:07 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef LM_LST_H
# define LM_LST_H
# include <stdlib.h>	// needed for size_t

/* *****************************  t_lst  *********************************** */
//		int				content;
//		struct s_lst	*next;
typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}					t_lst;

/// @brief 	Adds a node to the back of a lst
/// @param lst_to_add
/// @param node_to_add
void			lm_lst_add_back(t_lst *lst_to_add, t_lst *node_to_add);

/// @brief 	Calculates the average value of all nodes in a lst
/// @param lst_to_calculate
/// @return	Average value
long			lm_lst_calculate_average(t_lst *lst_to_calculate);

/// @brief 	Calculates the sum of all values of all nodes in a lst
/// @param lst_to_calculate
/// @return	Sum of all values
long			lm_lst_calculate_sum(t_lst *lst_to_calculate);

/// @brief 	Checks if there is a duplicate value in a lst
/// @param lst_to_check
/// @return 1 (True) or 0 (False)
char			lm_lst_check_int_duplicate(t_lst **lst_to_check);

/// @brief 	Counts the steps / iterations it takes to go from one
///			node to another
/// @param lst_start
/// @param lst_end
/// @return Count of iterations or 0 on FAILURE
size_t			lm_lst_count_iterations(t_lst *lst_start, t_lst *lst_end);

/// @brief	Counts all nodes in a lst
/// @param lst_to_count
/// @return	Counter of all nodes
size_t			lm_lst_count_nodes(t_lst *lst_to_count);

/// @brief 	Counts how many consecutive nodes have a bigger value
///			than the one before
/// @param lst_to_count
/// @return Counter of streak
size_t			lm_lst_count_streak_ascending(t_lst *lst_to_count);

/// @brief 	Deletes a node in a lst
/// @param lst_head
/// @param node_to_delete
void			lm_lst_delete_node(t_lst **lst_head, t_lst *node_to_delete);

/// @brief 	Accesses the value of lst_index
/// @param lst_index
/// @return value of lst_index
int				lm_lst_fetch_value(t_lst *lst_index);

/// @brief 	Finds the biggest int value of a lst
/// @param lst_to_search
/// @return Biggest int value
int				lm_lst_find_int_biggest(t_lst *lst_to_search);

/// @brief 	Finds the nearest bigger value of an int in a lst
/// @param lst_to_search
/// @param int_to_compare
/// @return	Next biggest int value
int				lm_lst_find_int_next_biggest(t_lst *lst_to_search,
					int int_to_compare);

/// @brief 	Finds the second smallest int value in a lst
/// @param lst_to_search
/// @return Second smallest int value
int				lm_lst_find_int_second_smallest(t_lst *lst_to_search);

/// @brief 	Finds the smallest int value in a lst
/// @param lst_to_search
/// @return Smallest int value
int				lm_lst_find_int_smallest(t_lst *lst_to_search);

/// @brief	Finds the shortest path (iterations) to the top of a lst.
/// @param lst_index
/// @param lst_dest_up
/// @param lst_dest_down
/// @return	Shortest no. of iterations either negative (up) or positive (down)
int				lm_lst_find_shortest_path(t_lst *lst_index, t_lst *lst_dest_up,
					t_lst *lst_dest_down);

/// @brief 	Frees all nodes of a lst
/// @param lst_to_free
void			lm_lst_free(t_lst *lst_to_free);

/// @brief 	Gets the ptr to a node of a lst by an index
/// @param lst_to_iterate
/// @param index
/// @return Ptr to the node
t_lst			*lm_lst_get_by_index(t_lst *lst_to_iterate, size_t index);

/// @brief	Gets the ptr to a node of a lst by a value
/// @param lst_to_search
/// @param value
/// @return Ptr to the node
t_lst			*lm_lst_get_by_value(t_lst *lst_to_search, int value);

/// @brief 	Duplicates all values and nodes of a lst and creates a new one
/// @param lst_to_duplicate
/// @return Ptr to the newly allocated lst (with malloc!)
t_lst			*lm_lst_get_duplicate(t_lst *lst_to_duplicate);

/// @brief 	Gets the ptr to the last node of a lst
/// @param lst_to_iterate
/// @return Ptr to the node
t_lst			*lm_lst_get_last(t_lst *lst_to_iterate);

/// @brief 	Creates a new node with a given value
/// @param value
/// @return Ptr to the node
t_lst			*lm_lst_get_new(int value);

/// @brief 	Prints the content of a node to a target fd
/// @param node_to_print
/// @param fd_target
void			lm_lst_print_node_fd(t_lst *node_to_print, int fd_target);

/// @brief	Prints all contents of all nodes to a target fd
/// @param lst_to_print
/// @param fd_target
void			lm_lst_print_fd(t_lst *lst_to_print, int fd_target);

/// @brief	Sorts all integers of all nodes into an array in ascending order
/// @param lst_to_sort
/// @return	NULL on FAILURE or ptr to int *array on SUCCESS
int				*lm_lst_sort_to_array(t_lst **lst_to_sort);

/* ***************************  t_lst_header  ******************************* */
//		char			*title;
//		t_lst			*head;
typedef struct s_lst_header
{
	char			*title;
	t_lst			*head;
}					t_lst_header;

/// @brief 	Frees all nodes and the header lst
/// @param lst_to_free
void			lm_lst_header_free(t_lst_header *lst_to_free);

/// @brief	Creates a new node with a given title
/// @param str_title
/// @return	Ptr to the node
t_lst_header	*lm_lst_header_get_new(char *str_title);

/// @brief 	Prints all nodes and its contents to a target fd
/// @param lst_to_print
/// @param fd_target
void			lm_lst_header_print_fd(t_lst_header *lst_to_print,
					int fd_target);

#endif	// LM_LST_H
