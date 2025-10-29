/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadoho <nadoho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:38:17 by nadoho            #+#    #+#             */
/*   Updated: 2025/10/24 18:57:46 by nadoho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (!current)
	{
		current = new;
		*lst = current;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
	}
}
