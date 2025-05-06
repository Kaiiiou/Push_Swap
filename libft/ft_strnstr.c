/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:06:38 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/26 01:48:40 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	iv2;

	i = 0;
	iv2 = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + iv2] == needle[iv2]
			&& haystack[i + iv2] != 0 && i + iv2 < len)
		{
			iv2++;
			if (!needle[iv2])
				return ((char *)haystack + i);
		}
		i++;
		iv2 = 0;
	}
	return (NULL);
}
// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("salutations", "salut", 10));
// }