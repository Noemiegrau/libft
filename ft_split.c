/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:03:53 by nograu            #+#    #+#             */
/*   Updated: 2025/11/12 16:25:52 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char	const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		start;
	int		i;

	words = 0;
	start = 0;
	i = 0;
	result = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1);
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			start = i;
		while (s[i] && s[i] != c)
			i++;
		result[words++] = ft_substr(s, start, i - start);
	}
	return (result[words] = NULL, result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s[40] = " Hello World! My name is Noemie :)";
// 	char	c = ' ';
// 	char	**result;
// 	int	i = 0;

// 	result = ft_split(s, c);

// 	printf("Result is:\n");
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }

//result[words] = (char *)malloc(sizeof(char) * (i - start) + 1);
//ft_strlcpy(result[words++], &s[start], i - start + 1); //remplacer par substr