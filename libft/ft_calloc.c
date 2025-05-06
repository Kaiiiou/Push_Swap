/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:43:26 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/21 16:51:02 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mp;

	mp = malloc(count * size);
	if (mp == NULL)
		return (NULL);
	ft_bzero(mp, count * size);
	return (mp);
}
