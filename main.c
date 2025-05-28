/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:49:46 by amarti            #+#    #+#             */
/*   Updated: 2025/05/28 03:17:13 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node *a = NULL;
	t_node *b = NULL;

	if (argc < 2)
		return (error_msg("Error\n", NULL));
	if (!parse_args(&a, argc, argv))
		return (0);
	
	if (list_size (a) == 2 && !is_sorted (a))
		sa (a);
	else if (list_size (a) == 3 && !is_sorted (a))
		sort_three(&a);
	else if (list_size (a) == 5 && !is_sorted (a))
		sort_five (&a, &b);
	
	print_list (a);
	free_list(&a);
	return (0);
}