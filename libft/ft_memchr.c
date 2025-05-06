/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 01:31:43 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/24 22:29:43 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
	{
	unsigned char	*sv2;
	unsigned char	cv2;
	size_t			i;

	sv2 = (unsigned char *) s;
	cv2 = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (sv2[i] == cv2)
			return ((void *) &sv2[i]);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	printf("%p\n", ft_memchr("BANKAI", 'Z', 9));
// }