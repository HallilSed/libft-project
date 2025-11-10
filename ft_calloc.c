/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehallil <sehallil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:18:02 by sehallil          #+#    #+#             */
/*   Updated: 2025/10/26 07:56:40 by sehallil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	total_s;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total_s = nmemb * size;
	arr = malloc(total_s);
	if (!arr)
		return (NULL);
	ft_bzero(arr, total_s);
	return (arr);
}
