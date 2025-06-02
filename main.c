/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:49:46 by amarti            #+#    #+#             */
/*   Updated: 2025/06/02 10:16:08 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
	{
		error_msg("Error\n", NULL);
		return (1);
	}
	if (!parse_args(&a, argc, argv))
		return (1);
	if (list_size (a) == 2 && !is_sorted (a))
		sa (a);
	else if (list_size (a) == 3 && !is_sorted (a))
		sort_three(&a);
	else if (list_size (a) == 5 && !is_sorted (a))
		sort_five (&a, &b);
	else if (!is_sorted(a))
		chunk_sort(&a, &b);
	free_list (&a);
	return (0);
}
