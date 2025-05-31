/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:49:10 by amarti            #+#    #+#             */
/*   Updated: 2025/05/31 10:26:31 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first < second && second < third && first < third)
		return ;
	else if (first > second && second > third && third < first)
	{
		sa(*a);
		rra(a);
	}
	else if (first > second && second < third && third > first)
		sa(*a);
	else if (first > second && second < third && third < first)
		ra(a);
	else if (first < second && second > third && third > first)
	{
		rra(a);
		sa(*a);
	}
	else if (first < second && second > third && third < first)
		rra(a);
}

void	sort_five(t_node **a, t_node **b)
{
	bring_min_top (a);
	pb (a, b);
	bring_min_top (a);
	pb (a, b);
	sort_three (a);
	pa(a, b);
	pa(a, b);
}
