/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:16:30 by kai-iou           #+#    #+#             */
/*   Updated: 2025/01/24 04:26:09 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	long	num;

	num = n;
	len = ft_numlen(num);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	while (len > 0 && num != 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		result[0] = '0';
	return (result);
}
// int main(void)
// {
//     char *str;

//     str = ft_itoa(12345);
//     if (str)
//     {
//         printf("ft_itoa(12345) = %s\n", str);
//         free(str);
//     }
// }