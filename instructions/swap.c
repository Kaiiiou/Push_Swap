/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 08:59:07 by amarti            #+#    #+#             */
/*   Updated: 2025/05/03 11:02:18 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_node *stack_a)
{
	if(!stack_a || !stack_a->next)
		return;
	
	int	svgrd;
	svgrd = stack_a->value;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = svgrd;
}
void sb(t_node *stack_b)
{
	if(!stack_b || !stack_b->next)
		return;
	
	int	svgrd;
	svgrd = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = svgrd;
}
ss(t_node *stack_a, t_node *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}