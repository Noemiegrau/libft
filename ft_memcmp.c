/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:13:24 by nograu            #+#    #+#             */
/*   Updated: 2025/11/07 18:27:47 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s11;
	const unsigned char	*s22;
	size_t i;

	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	i = 0;
	while (s11[i] && s22[i] && i < n)
	{
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[30] = "abcde";
	char	s2[30] = "abcde";
	size_t	n = 4;
	
	printf("ft_memcmp: %s.\n", (char *)ft_memcmp(s1, s2, n));
	printf("memcmp: %s.\n", (char *)memcmp(s1, s2, n));
	return (0);
}