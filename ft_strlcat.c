/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:48:28 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/22 12:14:16 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	int	dst_len;
	int	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if(size == 0 || size <= (unsigned int)dst_len)
		return ((int)size + src_len);
	while (src[i] && (i < (size - dst_len -1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if ((int)size > dst_len)
		dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
