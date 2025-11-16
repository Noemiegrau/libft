/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:41:15 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:36:23 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s[] = "Hello World!";
// 	int c = 'o';
// 	char	*result = ft_strrchr(s, c);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 	printf("nope, sorry");
// }