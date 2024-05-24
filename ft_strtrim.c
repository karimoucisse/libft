/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:06:17 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/24 21:02:28 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc_len(const char *s1, const char *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			len++;
		i++;
	}
	return (len);
}

void	trim_str_ft(const char *s1, const char *set, char *copy)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
		{
			copy[j] = s1[i];
			j++;
		}
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*trimed_str;

	len = ft_strlen(s1) - calc_len(s1, set);
	trimed_str = malloc(sizeof(char) * (len + 1));
	if (trimed_str == NULL)
		return (0);
	trim_str_ft(s1, set, trimed_str);
	trimed_str[len] = '\0';
	return (trimed_str);
}
