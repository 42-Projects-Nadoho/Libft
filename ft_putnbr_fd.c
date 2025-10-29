/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:17:49 by luzolo            #+#    #+#             */
/*   Updated: 2025/10/27 19:11:17 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	last;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr_fd((int)(number / 10), fd);
		ft_putnbr_fd((int)(number % 10), fd);
	}
	else
	{
		last = number + '0';
		write(fd, &last, 1);
	}
}
