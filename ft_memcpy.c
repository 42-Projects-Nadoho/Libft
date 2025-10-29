/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:36:38 by nadoho            #+#    #+#             */
/*   Updated: 2025/10/27 20:25:58 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char dest[100];
// 	char test[] = "copy-this";
// 	memcpy(dest, test, ft_strlen(test) + 1);
// 	printf("After memcpy():  %s\n", test);
// 	char test2[] = "copy-that";
// 	memcpy(dest, test2, ft_strlen(test2) + 1);
// 	printf("After memcpy():  %s\n", test2);
// 	// int test2[7] = {12, 45, 58, 42, 65, 12, 32};
// 	// memcpy(test2 + 3, 50, 1);
// 	// for (int i = 0; i < 7; i++)
// 	// {
// 	// 	printf("%d", test2[i]);
// 	// 	printf("\n");
// 	// }
// 	// printf("\n");
// 	// int test3[7] = {12, 45, 58, 42, 65, 12, 32};
// 	// ft_memcpy(test3 + 3, 50, 1);
// 	// for (int j = 0; j < 7; j++)
// 	// {
// 	// 	printf("%d", test3[j]);
// 	// 	printf("\n");	
// 	// }
// 	// printf("\n");
// }