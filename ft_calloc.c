/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:50:53 by nograu            #+#    #+#             */
/*   Updated: 2025/11/07 14:24:48 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
}

int	main(void)
{

	return (0);
}
//If nmemb or size is 0, then calloc() returns a unique
//pointer value that can be successfully passed to free().