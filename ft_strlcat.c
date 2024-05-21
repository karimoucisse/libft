/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:48:28 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/21 13:19:26 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	l;

	i = 0;
	l = size;
	while (src[i] && i > (size -1))
	{
		dst[(size - 1) + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
