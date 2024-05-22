
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t		i;

	sub_str = malloc(sizeof(char) * len + 1);
	if(sub_str == NULL)
		return (0);
	i = 0;
	while (s[start] && (i < len))
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
