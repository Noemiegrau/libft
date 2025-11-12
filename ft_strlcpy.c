/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:06:14 by nograu            #+#    #+#             */
/*   Updated: 2025/11/07 11:07:11 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char dst[30] = "";
//     const char *src = "Hello world!";
//     size_t size = 6;
//     printf("ft_strlcpy: %d.\n", ft_strlcpy(dst, src, size));
//     //printf("strlcpy: %d.\n", strlcpy(dst, src, size)); 
// // POURQUOI NE MARCHE PAS ?
//     return (0);
// }
