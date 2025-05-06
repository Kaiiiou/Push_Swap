/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 07:54:09 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/26 02:11:23 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	if (start >= slen)
		return (ft_strdup (""));
	if (start + len > slen)
		len = slen - start;
	result = (char *)malloc((len + 1) * sizeof (char));
	if (!result)
		return (NULL);
	while (i < len && s[start + i])
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
// int	main(void)
// {
// 	char *substr;

// 	substr = ft_substr("Sakashima Yokoshima Happo Fusagari", 10, 26);
// 	printf("%s\n", substr);
// }
