/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:58:22 by luzolo            #+#    #+#             */
/*   Updated: 2025/10/24 16:51:32 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countsize(long number)
{
	int	count;

	count = 0;
	if (number <= 0)
	{
		number *= -1;
		count += 1;
	}
	while (number != 0)
	{
		count++;
		number /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		result_len;
	int		i;
	long	number;

	number = (long)(n);
	result_len = ft_countsize(number);
	result = (char *)malloc(sizeof(char) * (result_len + 1));
	if (!result)
		return (NULL);
	i = 0;
	if (number < 0)
	{
		number *= -1;
		result[i++] = '-';
	}
	result[result_len] = '\0';
	while (result_len > i)
	{
		result[--result_len] = (number % 10) + '0';
		number /= 10;
	}
	return (result);
}
