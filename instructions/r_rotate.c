/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:45:50 by amarti            #+#    #+#             */
/*   Updated: 2025/06/02 07:39:41 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **stack_a)
{
	t_node	*last;
	t_node	*prev;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	last = *stack_a;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	t_node	*last;
	t_node	*prev;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	last = *stack_b;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	s_rra(stack_a);
	s_rrb(stack_b);
	write(1, "rrr\n", 4);
}

void	s_rrb(t_node **stack_b)
{
	t_node	*last;
	t_node	*prev;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	last = *stack_b;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
}

void	s_rra(t_node **stack_a)
{
	t_node	*last;
	t_node	*prev;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	last = *stack_a;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}
