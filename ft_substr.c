/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:55:24 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/28 16:45:19 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if ((unsigned int)start > ft_strlen(s))
		len = 0;
	s = s + start;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (0);
	while (*s && i < (len))
	{
		new_str[i] = *s;
		i++;
		s++;
	}
	new_str[i] = '\0';
	return (new_str);
}
