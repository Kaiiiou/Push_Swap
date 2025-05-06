/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:45:29 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/24 08:19:25 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	ssize_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = -1;
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen - 1)
	{
		while (src[++i] != '\0')
			dst[dstlen + i] = src[i];
		dst[dstlen + i] = '\0';
	}
	else
	{
		while (++i < ((ssize_t)dstsize - (ssize_t)dstlen - 1))
			dst[dstlen + i] = src[i];
		dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}
