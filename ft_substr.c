
#include "libft.h"

// ("tripouille", 100, 1)
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t		i;

	i = 0;
	if((int)len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	sub_str = malloc(sizeof(char) + len);
	if(sub_str == NULL)
		return (0);
	while(s[start] && i < len)
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

// int main()
// {
// 	const char str[11] = "tripouille";
// 	printf("s = %s", ft_substr(str, 100, 1));
// }
