/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:40:54 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/28 17:28:23 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
	{
		*lst = (*lst)->next;
		if (*lst == NULL)
		{
			new->next = (*lst)->next;
			new = *lst;
		}
	}

	// if (new)
	// {
	// 	new->next = *lst;
	// 	*lst = new;
	// }
}
