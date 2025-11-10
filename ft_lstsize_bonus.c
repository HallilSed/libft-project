/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehallil <sehallil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:07:17 by sehallil          #+#    #+#             */
/*   Updated: 2025/10/22 09:59:05 by sehallil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*head;

	if (!lst)
	{
		return (0);
	}
	i = 0;
	head = lst;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}
