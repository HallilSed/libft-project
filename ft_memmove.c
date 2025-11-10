/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehallil <sehallil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:29:33 by sehallil          #+#    #+#             */
/*   Updated: 2025/10/26 08:15:55 by sehallil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*for_dest;
	const unsigned char	*for_src;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	for_dest = (unsigned char *)dest;
	for_src = (const unsigned char *)src;
	i = 0;
	if (for_dest < for_src)
	{
		while (i < n)
		{
			for_dest[i] = for_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			for_dest[n] = for_src[n];
		}
	}
	return (dest);
}
