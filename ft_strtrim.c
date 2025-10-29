/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:43:52 by luzolo            #+#    #+#             */
/*   Updated: 2025/10/27 19:13:13 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	while (end >= start && ft_is_in_set(s1[end], set))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, end - start + 2);
	return (trimmed_str);
}
