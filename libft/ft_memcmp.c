/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 06:43:08 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/24 22:38:18 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1v2;
	unsigned char	*s2v2;
	size_t			i;

	s1v2 = (unsigned char *)s1;
	s2v2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1v2[i] != s2v2[i])
			return ((unsigned char) s1v2[i] - (unsigned char) s2v2[i]);
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	printf("%d\n", ft_memcmp("BANKBI", "BANKAI", 4));
// }
