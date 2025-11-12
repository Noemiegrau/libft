/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:26:05 by nograu            #+#    #+#             */
/*   Updated: 2025/11/07 11:07:17 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n -1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	*s1 = "ab";
// 	char	*s2 = "ab";
// 	size_t	n = 2;

// 	printf("ft_strncmp: %d.\n", ft_strncmp(s1, s2, n));
// 	printf("strncmp: %d.", strncmp(s1, s2, n));

// 	return (0);
// }