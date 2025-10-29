/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:40:39 by luzolo            #+#    #+#             */
/*   Updated: 2025/10/24 22:30:09 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[20] = "abcdef";
// 	ft_memmove(str + 2, str, 4);
// 	printf("%s\n", str); // attendu : ababcd
// }