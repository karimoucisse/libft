#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if(!new_list || !ft_lstnew(lst->content))
		return (0);
	lst = lst->next;
	while(lst)
	{
		(*f)(lst->content);
		(*del)(lst->content);
		lst = lst->next;
	}
	return lst;
}
