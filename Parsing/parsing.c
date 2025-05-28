/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:59:21 by amarti            #+#    #+#             */
/*   Updated: 2025/05/28 03:19:50 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_number(const char *str)
{
	if (*str == '\0')
		return (false);
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (false);
		str++;
	}
	return (true);
}

bool	is_dupe(t_node *stack_a, long n)
{
	while(stack_a)
	{
		if(stack_a->value == n)
			return(true);
		stack_a = stack_a->next;
	}
	return (false);
}

bool	is_limits(char *arg)
{
	long	nb;
	nb = ft_atol(arg);
	if (nb < -2147483648 || nb > 2147483647)
		return (false);
	return (true);

}

int	add_valid_args(char **array_arg, t_node **stack_a)
{
	t_node	*new_node;
// TODO parse TAILLE
		if(!is_number(*array_arg) || !is_limits(*array_arg))
			return(0);
		if(is_dupe(*stack_a, ft_atol(*array_arg)))
			return(0);
		new_node = create_node(ft_atol(*array_arg));
		if (!new_node)
			return(0);
		add_node_back(stack_a, new_node);
	return (1);
}
