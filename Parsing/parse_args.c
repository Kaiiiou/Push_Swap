/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:00:16 by amarti            #+#    #+#             */
/*   Updated: 2025/05/22 21:18:45 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_args(t_node **stack_a, int argc, char **argv)
{
	int		i;
	long	n;
	t_node	*new_node;
	char **array_arg;
	
	i = 1;
	if (argc > 2)
		array_arg = argv;
	if (argc == 2)
	{
		i = 0;
		array_arg = ft_split(argv[1], ' ');
	}
	while(array_arg[i])
	{
		if(!is_number(array_arg[i]) || !is_limits(array_arg[i]))
			return(error_msg("Error\n"));
		n = ft_atol(array_arg[i]);
		if(is_dupe(*stack_a, (int)n))
			return(error_msg("Error\n"));
		new_node = create_node((int)n);
		if (!new_node)
			return (error_msg("Error\n"));
		add_node_back(stack_a, new_node);
		i++;
	}
	return (1);
}
