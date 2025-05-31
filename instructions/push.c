/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:03:33 by amarti            #+#    #+#             */
/*   Updated: 2025/05/31 09:58:41 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*svgrd;

	if (*stack_b == NULL)
		return ;
	svgrd = *stack_b;
	*stack_b = (*stack_b)->next;
	svgrd->next = *stack_a;
	*stack_a = svgrd;
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*svgrd;

	if (*stack_a == NULL)
		return ;
	svgrd = *stack_a;
	*stack_a = (*stack_a)->next;
	svgrd->next = *stack_b;
	*stack_b = svgrd;
	write(1, "pb\n", 3);
}
