/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:04:39 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/27 17:03:41 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*lst_to_delete;

	if(lst)
	{
		lst_to_delete = lst;
		lst = lst->next;
		(*del)(lst_to_delete);
		free(lst_to_delete);
	}
}
