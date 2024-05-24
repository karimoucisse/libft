/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:55:24 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/24 21:21:38 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ("tripouille", 100, 1)
// start >= ft_strlen(s)
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	i = 0;
	if ((int)len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	sub_str = malloc(sizeof(char) + len);
	if (sub_str == NULL)
		return (0);
	while (s[start] && i < len)
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
