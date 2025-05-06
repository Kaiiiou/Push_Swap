/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:51:24 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/21 20:10:51 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*mp;
	int		s1len;

	s1len = ft_strlen(s1) + 1;
	mp = malloc(s1len);
	if (mp == NULL)
		return (NULL);
	ft_strlcpy(mp, s1, s1len);
	return (mp);
}
