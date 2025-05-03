/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:03:33 by amarti            #+#    #+#             */
/*   Updated: 2025/05/03 14:10:55 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_node **stack_a, t_node **stack_b)
{
	if(*stack_b == NULL)
		return;
	t_node	*svgrd = *stack_b;
	*stack_b = (*stack_b)->next;
	svgrd->next = *stack_a;
	*stack_a = svgrd;
}

void pb(t_node **stack_a, t_node **stack_b)
{
	if(*stack_a == NULL)
		return;
	t_node	*svgrd = *stack_a;
	*stack_a = (*stack_a)->next;
	svgrd->next = *stack_b;
	*stack_b = svgrd;
}