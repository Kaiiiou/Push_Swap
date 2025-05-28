/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:00:16 by amarti            #+#    #+#             */
/*   Updated: 2025/05/28 19:48:41 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_args(t_node **stack_a, int argc, char **argv)
{
	int		i;
	char	**array_arg;

	i = -1;
	if (argc > 2)
		array_arg = ++argv;
	if (argc == 2)
		array_arg = ft_split(argv[1], ' ');
	if (!array_arg || !array_arg[0])
		return(error_msg("Error\n", array_arg));
	while(array_arg[++i])
	{
		if (!add_valid_args(&array_arg[i], stack_a))
		{
			if (argc > 2)
				error_msg("Error\n", NULL);
			else
				error_msg("Error\n", array_arg);
			return (free_list(stack_a), 0);
		}
	}
	if (argc == 2)
		free_array(array_arg);
	return (1);
}
