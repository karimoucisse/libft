/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:41:26 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/21 17:32:19 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (ft_strncmp(&big[i], &little[j], 1) == 0)
			j++;
		else
			j = 0;
		if (j == ft_strlen(little))
			return (char *)(&(big[i - (j - 1)]));
		i++;
	}
	return (0);
}

