/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:39:14 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/25 19:33:09 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// remplace la memoire pas \0 x n
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
// int main(void)
// {
// 	char test[100] = "KonjikiAshisogiJizō";

// 	ft_bzero(test, 10);
// 	printf("%s\n", test);
// }