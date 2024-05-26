#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *first_list;

	first_list = malloc(sizeof(t_list *));
	if(first_list == NULL)
		return (0);
	first_list->content = content;
	first_list->next = NULL;
	return (first_list);
}
