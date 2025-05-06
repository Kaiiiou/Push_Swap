/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:06:14 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/24 23:47:43 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cv2;

	i = 0;
	cv2 = (unsigned char *)s;
	while (i != n)
	{
		cv2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main(void)
// {
// 	char test[50] = "BANKAI KATEN KYÔKOTSU KARAMATSU SHINJU";

// 	ft_memset(test, 'B', 20);
// 	printf("%s\n", test);
// }