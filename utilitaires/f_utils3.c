/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 07:38:37 by amarti            #+#    #+#             */
/*   Updated: 2025/05/31 10:17:43 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_node *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->value;
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

void	bring_max_top(t_node **stack)
{
	int	max;
	int	index;
	int	size;

	if (!stack || !*stack)
		return ;
	max = get_max(*stack);
	index = get_index(*stack, max);
	size = list_size(*stack);
	if (index <= size / 2)
	{
		while ((*stack)->value != max)
			rb (stack);
	}
	else
	{
		while ((*stack)->value != max)
			rrb (stack);
	}
}
