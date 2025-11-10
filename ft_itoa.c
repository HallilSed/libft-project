/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehallil <sehallil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:51:10 by sehallil          #+#    #+#             */
/*   Updated: 2025/10/22 14:17:17 by sehallil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		counter = 1;
	}
	while (n)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int					i;
	char				*buff;
	unsigned int		num;

	buff = (char *)malloc(ft_count_len(n) + 1);
	if (!buff)
		return (NULL);
	buff[ft_count_len(n)] = '\0';
	i = ft_count_len(n) - 1;
	if (n < 0)
		num = -(unsigned int)n;
	else
		num = n;
	if (num == 0)
	{
		buff[0] = '0';
	}
	while (num > 0)
	{
		buff[i--] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		buff[0] = '-';
	return (buff);
}
