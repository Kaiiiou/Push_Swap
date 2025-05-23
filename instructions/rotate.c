/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:12:51 by amarti            #+#    #+#             */
/*   Updated: 2025/05/05 13:23:56 by amarti           ###   ########.fr       */
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
}

void	rb(t_node **stack_b)
{
	t_node	*svgrd;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	svgrd = *stack_b;
	*stack_b = (*stack_b)->next;
	add_node_back(stack_b, svgrd);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
