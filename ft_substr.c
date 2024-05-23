
#include "libft.h"

// ("tripouille", 100, 1)
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t		i;
	// int malloc_len;

	i = 0;
	s = s + start;
	sub_str = malloc(sizeof(char) * len);
	if(sub_str == NULL)
		return (0);
	while (*s && (i != len))
	{
		sub_str[i] = *s++;
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
