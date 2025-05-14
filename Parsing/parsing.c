/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:59:21 by amarti            #+#    #+#             */
/*   Updated: 2025/05/14 17:12:59 by amarti           ###   ########.fr       */
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

bool	is_dupe(t_node *stack_a, int n)
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