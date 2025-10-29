/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:34:33 by nadoho            #+#    #+#             */
/*   Updated: 2025/10/27 19:13:09 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	s = s + len;
	while (len-- >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
