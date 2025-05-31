/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 07:59:40 by amarti            #+#    #+#             */
/*   Updated: 2025/05/31 10:25:07 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

// ACTIONS

void	add_front(t_node **head, int value);
void	add_back(t_node **head, int value);
void	print_list(t_node *head);
int		list_size(t_node *head);
int		get_last_value(t_node *head);
void	add_node_back(t_node **head, t_node *node);
int		get_min(t_node *stack);
int		get_index(t_node *stack, int value);
void	bring_min_top(t_node **stack);
void	free_list(t_node **a);

// UTILITAIRES

long	ft_atol(const char *str);
int		error_msg(char *msg, char **error);
bool	is_sorted(t_node *stack);
t_node	*create_node(long value);
void	free_array(char **array);

// INSTRUCTIONS

void	sa(t_node *stack_a);
void	sb(t_node *stack_b);
void	ss(t_node *stack_a, t_node *stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

// PARSING

bool	is_number(const char *str);
bool	is_dupe(t_node *stack_a, long n);
bool	is_limits(char *argv);
int		parse_args(t_node **stack_a, int argc, char **argv);
int		add_valid_args(char **array_arg, t_node **stack_a);
bool	is_len(char *str);

// SORTING

void	sort_three(t_node **a);
void	sort_five(t_node **a, t_node **b);
void	chunk_sort(t_node **a, t_node **b);
int		get_max(t_node *stack);
void	bring_max_top(t_node **stack);
void	convert_to_ranks(t_node *stack);
void	save_values(t_node *stack, int *values);
void	push_chunk_to_b(t_node **a, t_node **b, int chunk_min, int chunk_max);

#endif