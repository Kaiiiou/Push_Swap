/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:18:02 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/24 23:48:49 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//gere pas les overlap(copie src dans dst)
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;	
	unsigned char		*dstv2;
	const unsigned char	*srcv2;

	i = 0;
	dstv2 = (unsigned char *)dst;
	srcv2 = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	while (i != n)
	{
		dstv2[i] = srcv2[i];
		i++;
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