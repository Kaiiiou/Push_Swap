/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:45:27 by amarti            #+#    #+#             */
/*   Updated: 2025/05/28 19:44:25 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	int		i;
	int		nega;
	long	result;

	i = 0;
	nega = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			nega = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * nega);
}

int	error_msg(char *msg, char **error)
{
	int	i;

	i = 0;
	if (error)
		free_array(error);
	while(msg[i])
	{
		write(2, &msg[i], 1);
		i++;
	}
	return (0);
}

void	free_array(char **array)
{
	int i;

	i = 0;
	if(!array)
		return;
	while (array[i] != 0)
	{
		free(array[i]);
		i++;
	}
	free (array);
}

void	free_list(t_node **a)
{
	t_node	*temp = NULL;

	while (*a != NULL)
	{
		temp = (*a)->next;
		free(*a);
		*a = temp;
	}
}
