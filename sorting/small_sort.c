/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:49:10 by amarti            #+#    #+#             */
/*   Updated: 2025/06/05 02:59:24 by amarti           ###   ########.fr       */
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

void	sort_four(t_node **a, t_node **b)
{
	bring_min_top (a);
	pb (a, b);
	sort_three (a);
	pa(a, b);
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

void	is_chunk_sort(t_node *a, t_node *b)
{
	if (list_size (a) == 2 && !is_sorted (a))
		sa (a);
	else if (list_size (a) == 3 && !is_sorted (a))
		sort_three(&a);
	else if (list_size (a) == 4 && !is_sorted (a))
		sort_four(&a, &b);
	else if (list_size (a) == 5 && !is_sorted (a))
		sort_five (&a, &b);
}
