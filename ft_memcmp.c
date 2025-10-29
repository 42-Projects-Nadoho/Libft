/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:40:55 by nadoho            #+#    #+#             */
/*   Updated: 2025/10/27 19:10:54 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d;
	const unsigned char	*s;

	d = (const unsigned char *)s1;
	s = (const unsigned char *)s2;
	while (n-- > 0)
		if (*d++ != *s++)
			return (*(d - 1) - *(s - 1));
	return (0);
}

// int	main()
// {
// }