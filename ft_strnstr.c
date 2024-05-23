/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:41:26 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/23 17:31:38 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	int		j;

	i = 0;
	j = 0;
	k = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[k] && (k < (size_t)len))
	{
		i = k;
		while (big[i] && (i < (size_t)len))
		{
			if ((char)big[i] != (char)little[j])
				j = 0;
			if ((char)big[i] == (char)little[j])
				j++;
			if (j == ft_strlen(little))
				return ((char *)(&(big[i - (j - 1)])));
			i++;
		}
		k++;
	}
	return (0);
}
