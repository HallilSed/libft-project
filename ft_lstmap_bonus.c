/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehallil <sehallil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:16:23 by sehallil          #+#    #+#             */
/*   Updated: 2025/10/22 12:11:20 by sehallil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	if (!content)
		return (NULL);
	new_node = ft_lstnew(content);
	if (!new_node)
		return (del(content), NULL);
	new_node->next = ft_lstmap(lst->next, f, del);
	if (lst->next && !new_node->next)
		return (ft_lstclear(&new_node, del), NULL);
	return (new_node);
}
