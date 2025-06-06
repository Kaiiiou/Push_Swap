/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 08:59:07 by amarti            #+#    #+#             */
/*   Updated: 2025/05/31 09:58:41 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node *stack_a)
{
	int	svgrd;

	if (!stack_a || !stack_a->next)
		return ;
	svgrd = stack_a->value;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = svgrd;
	write(1, "sa\n", 3);
}

void	sb(t_node *stack_b)
{
	int	svgrd;

	if (!stack_b || !stack_b->next)
		return ;
	svgrd = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = svgrd;
	write(1, "sb\n", 3);
}

void	ss(t_node *stack_a, t_node *stack_b)
{
	int	svgrd;

	if (stack_a && stack_a->next)
	{
		svgrd = stack_a->value;
		stack_a->value = stack_a->next->value;
		stack_a->next->value = svgrd;
	}
	if (stack_b && stack_b->next)
	{
		svgrd = stack_b->value;
		stack_b->value = stack_b->next->value;
		stack_b->next->value = svgrd;
	}
	write(1, "ss\n", 3);
}
