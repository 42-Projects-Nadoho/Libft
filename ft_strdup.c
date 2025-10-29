/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:15:46 by luzolo            #+#    #+#             */
/*   Updated: 2025/10/27 19:12:03 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	str = (char *)malloc(sizeof(char) *(len + 1));
	if (!str)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
