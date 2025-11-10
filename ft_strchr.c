/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehallil <sehallil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:38:23 by sehallil          #+#    #+#             */
/*   Updated: 2025/10/23 09:33:09 by sehallil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char				tmp;
	const char			*ptr;
	int					i;

	tmp = (char)c;
	ptr = s;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == tmp)
		{
			return ((char *)&ptr[i]);
		}
		i++;
	}
	if (tmp == '\0')
	{
		return ((char *)&ptr[i]);
	}
	return (NULL);
}
