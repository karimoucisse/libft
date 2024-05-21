/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:48:28 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/21 19:47:30 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if(size == 0 || ft_strlen(dst) > (int)size)
		return (size + ft_strlen(src));
	while (src[i] && (i < (size -1)))
	{
		dst[size + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
