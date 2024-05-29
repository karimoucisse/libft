/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:07:15 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/29 19:14:16 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*lst_copy;

	if (!lst)
		return (0);
	while (lst)
	{
		if (ft_lstnew((*f)(lst->content)))
		{
			lst_copy = ft_lstnew((*f)(lst->content));
			ft_lstadd_back(&new_lst, lst_copy);
			// new_lst = new_lst->next;
		}
		else
		{
			(*del)(lst_copy->content);
			free(lst_copy);
		}
		lst = lst->next;
	}
	return (new_lst);
}
