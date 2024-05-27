/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:07:15 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/27 20:07:16 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list || !ft_lstnew(lst->content))
		return (0);
	lst = lst->next;
	while (lst)
	{
		(*f)(lst->content);
		(*del)(lst->content);
		lst = lst->next;
	}
	return (lst);
}
