/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 07:18:11 by amarti            #+#    #+#             */
/*   Updated: 2025/06/05 02:44:54 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	save_values(t_node *stack, int *values)
{
	t_node	*current;
	int		i;

	current = stack;
	i = 0;
	while (current)
	{
		values[i] = current->value;
		current = current->next;
		i++;
	}
}

static void	chunk_to_b(t_node **a, t_node **b, int chunk_min, int chunk_max)
{
	int	size;
	int	i;

	if (!a || !*a)
		return ;
	size = list_size(*a);
	i = 0;
	while (i < size)
	{
		if ((*a)->value >= chunk_min && (*a)->value <= chunk_max)
		{
			pb(a, b);
			if ((*b)->value < (chunk_min + chunk_max) / 2)
				rb(b);
		}
		else
			ra(a);
		i++;
	}
}

static void	calculate_ranks(t_node *stack, int *values, int size)
{
	t_node	*current;
	int		i;
	int		rank;
	int		j;

	current = stack;
	i = 0;
	while (current)
	{
		rank = 0;
		j = 0;
		while (j < size)
		{
			if (values[j] < values[i])
				rank++;
			j++;
		}
		current->value = rank;
		current = current->next;
		i++;
	}
}

static void	convert_to_ranks(t_node *stack)
{
	int	*values;
	int	size;

	if (!stack)
		return ;
	size = list_size(stack);
	values = malloc(sizeof(int) * size);
	if (!values)
		return ;
	save_values(stack, values);
	calculate_ranks(stack, values, size);
	free(values);
}

void	chunk_sort(t_node **a, t_node **b)
{
	int	size;
	int	chunk_size;
	int	chunks;
	int	i;

	if (!a || !*a)
		return ;
	size = list_size(*a);
	convert_to_ranks(*a);
	chunk_size = size / 5;
	if (chunk_size < 2)
		chunk_size = 2;
	chunks = size / chunk_size;
	i = 0;
	while (i < chunks && *a)
	{
		chunk_to_b(a, b, i * chunk_size, (i + 1) * chunk_size - 1);
		i++;
	}
	is_chunk_sort(*a, *b);
	while (*b)
	{
		bring_max_top(b);
		pa(a, b);
	}
}
