/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:15 by nograu            #+#    #+#             */
/*   Updated: 2025/11/07 18:03:43 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;
	
	i = 0;
	d = (unsigned char*)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[30] = "";
	char	*src = "Hello World!";
	size_t	n = 4;

	printf("ft_memmove: %s.\n", (char *)ft_memmove(dest, src, n));
	printf("memmove: %s.\n", (char *)memmove(dest, src, n));
	return (0);
}