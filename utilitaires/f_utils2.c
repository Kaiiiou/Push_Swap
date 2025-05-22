/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:36:50 by amarti            #+#    #+#             */
/*   Updated: 2025/05/22 15:28:30 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_node *stack)
{
	int	min;

	if(!stack)
		return (0);
	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

int	get_index(t_node *stack, int value)
{
	int	i;

	i = 0;
	while(stack)
	{
		if (stack->value == value)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}

void	bring_min_top(t_node **stack)
{
	int	min;
	int	index;
	int	size;

	min = get_min(*stack);
	index = get_index(*stack, min);
	size = list_size(*stack);
	
	if (!stack || !*stack)
		return;
	if (index <= size / 2)
	{
		while((*stack)->value != min)
			ra(stack);
	}
	else
	{
		while ((*stack)->value != min)
			rra(stack);
	}
}

bool	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if(stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}