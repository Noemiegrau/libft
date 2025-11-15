/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:45:41 by nograu            #+#    #+#             */
/*   Updated: 2025/11/13 16:32:40 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		i;
	
	i = 0;
	current = lst;
	if (!lst)
		return (0);
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}