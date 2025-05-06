/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 05:54:02 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/26 01:34:49 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    ft_tolower1(unsigned int n, char *s)
//  {
//  	if (*s >= 65 && *s <= 90)
//  		*s = *s + n;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
//  int main(void)
// {
//      char s[5] = "SALUT";
//      ft_striteri(s, (ft_tolower1));
//      printf("%s\n", s);
// }