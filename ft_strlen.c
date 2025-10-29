/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:07:09 by nadoho            #+#    #+#             */
/*   Updated: 2025/10/26 22:49:00 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int	main()
// {
// 	char *c = "test";
// 	printf("%s = %d", c, ft_strlen(c));
// }