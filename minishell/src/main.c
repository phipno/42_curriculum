/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:27:55 by amorvai           #+#    #+#             */
/*   Updated: 2023/02/25 16:36:27 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell/minishell.h"

int	main(int argc, char **argv)
{
	if (argc != 1)
		return (1);
	(void)argv;
	return (minishell());
}
