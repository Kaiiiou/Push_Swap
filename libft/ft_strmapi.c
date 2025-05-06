/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:53:01 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/26 01:35:39 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    ft_tolower1(unsigned int n, char *s)
// {
//  	if (*s >= 65 && *s <= 90)
//  		*s = *s + n;
// }
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*sv2;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	sv2 = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sv2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sv2[i] = f(i, s[i]);
		i++;
	}
	sv2[i] = '\0';
	return (sv2);
}
// int main(void)
// {
//      char s[5] = "SALUT";
//      ft_striteri(s, (ft_tolower1));
//      printf("%s\n", s);
// }
// MAIN PAS BON CLC 