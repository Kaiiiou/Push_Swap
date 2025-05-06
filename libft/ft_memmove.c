/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 02:22:01 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/24 23:49:06 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//comme memcpy mais gere les overlap(copie src dans dst)
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstv2;
	unsigned char	*srcv2;

	if (dst == src || len == 0)
		return (dst);
	i = 0;
	dstv2 = (unsigned char *)dst;
	srcv2 = (unsigned char *)src;
	if (dstv2 > srcv2)
	{
		while (len-- > 0)
			dstv2[len] = srcv2[len];
	}
	else
	{
		while (i < len)
		{
			dstv2[i] = srcv2[i];
			i++;
		}
	}
	return (dst);
}
// int main(void)
// {
// 	char    dest[50] = "HAKKANOTOGAME";
// 	char    src[50] = "BANKAI";

// 	ft_memcpy(dest, src, 4);
// 	printf("%s\n", dest);
// }