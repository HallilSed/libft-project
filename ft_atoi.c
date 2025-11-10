/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehallil <sehallil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:45:23 by sehallil          #+#    #+#             */
/*   Updated: 2025/10/26 09:02:42 by sehallil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checker(int sign)
{
	if (sign < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;
	long	over_checker;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		over_checker = res;
		res = res * 10 + (str[i] - '0');
		if (res / 10 != over_checker)
			return (ft_checker(sign));
		i++;
	}
	return ((int)(res * sign));
}
