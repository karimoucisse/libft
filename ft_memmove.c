/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:47:51 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/22 17:45:54 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char *copy;

	i = 0;
	copy = ft_strdup(src);
	while(i < n)
	{
		((char *)dst)[i] = copy[i];
		i++;
	}
	return (dst);
}

