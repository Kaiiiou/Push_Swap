/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:13:37 by amarti            #+#    #+#             */
/*   Updated: 2025/05/05 13:45:42 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_front(t_node **head, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = *head;
	*head = new_node;
}

void	add_back(t_node **head, int value)
{
	t_node	*new_node;
	t_node	*current;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	current = *head;
	new_node->value = value;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	while (current->next)
		current = current->next;
	current->next = new_node;
}

void	add_node_back(t_node **head, t_node *node)
{
	t_node	*i;

	if (!node)
		return ;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return ;
	}
	i = *head;
	while (i->next)
		i = i->next;
	i->next = node;
}

void	print_list(t_node *head)
{
	t_node	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d ->", current->value);
		current = current->next;
	}
	printf("NULL\n");
}

int	list_size(t_node *head)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_node *stack_a = NULL;
// 	t_node *stack_b = NULL;

// 	add_front(&stack_a, 12);
// 	add_front(&stack_a, 11);
// 	add_front(&stack_a, 10);

// 	add_back(&stack_a, 13);
// 	add_back(&stack_a, 14);

// 	printf("contenu du test stack_a :");
// 	print_list(stack_a);
// 	printf("Taille : %d\n",list_size(stack_a));
// 	printf("valeur avant NULL : %d\n", get_last_value(stack_a));

// 	add_front(&stack_b, 2);
// 	add_front(&stack_b, 1);
// 	add_front(&stack_b, 0);

// 	add_back(&stack_b, 3);
// 	add_back(&stack_b, 4);

// 	printf("contenu du test stack_b :");
// 	print_list(stack_b);
// 	printf("Taille : %d\n",list_size(stack_b));
// 	printf("valeur avant NULL : %d\n", get_last_value(stack_b));

// 	return(0);
// }