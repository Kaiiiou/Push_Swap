/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:12:51 by amarti            #+#    #+#             */
/*   Updated: 2025/05/31 09:58:42 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack_a)
{
	t_node	*svgrd;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	svgrd = *stack_a;
	*stack_a = (*stack_a)->next;
	add_node_back(stack_a, svgrd);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	t_node	*svgrd;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	svgrd = *stack_b;
	*stack_b = (*stack_b)->next;
	add_node_back(stack_b, svgrd);
	write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	t_node	*svgrd;

	if (*stack_a && (*stack_a)->next)
	{
		svgrd = *stack_a;
		*stack_a = (*stack_a)->next;
		add_node_back(stack_a, svgrd);
	}
	if (*stack_b && (*stack_b)->next)
	{
		svgrd = *stack_b;
		*stack_b = (*stack_b)->next;
		add_node_back(stack_b, svgrd);
	}
	write(1, "rr\n", 3);
}
