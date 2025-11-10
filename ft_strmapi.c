/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehallil <sehallil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:43:39 by sehallil          #+#    #+#             */
/*   Updated: 2025/10/21 18:44:33 by sehallil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*res;

	if (!s || !f)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	res = (char *)malloc((sizeof(char) * s_len + 1));
	if (!res)
	{
		return (NULL);
	}
	i = 0;
	while (i < s_len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
