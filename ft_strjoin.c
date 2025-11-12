/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:39:26 by nograu            #+#    #+#             */
/*   Updated: 2025/11/12 13:57:05 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	unsigned int	result_size;
	unsigned int	i;
	unsigned int	j;
	
	i = 0;
	j = 0;
	result_size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (result_size + 1));
	if (!result)
		return (NULL);
	while (s1[i] && (i < result_size))
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] && (i < result_size))
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char	s1[30] = "Hello ";
	char	s2[30] = "World!";
	
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}