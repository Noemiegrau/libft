/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:27:43 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:58:48 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len_s;
	char	*dest;

	i = 0;
	len_s = ft_strlen(s);
	dest = malloc(sizeof(char) * (len_s + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[30] = "Hello World!";

// 	printf("ft_strdup: %s\n", ft_strdup(s));
// 	printf("strdup: %s\n", strdup(s));
// 	return (0);
// }