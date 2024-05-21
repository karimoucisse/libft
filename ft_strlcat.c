/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:48:28 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/21 15:28:04 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int siz)
{
	int	i;
	int	l;

	i = 0;
	l = siz;
	if(siz == 0)
		return (0);
	while (src[i] && (i < (siz -1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if(siz > ft_strlen(dst))
		return (ft_strlen(src) + ft_strlen(dst));
	else
		return (ft_strlen(src) + siz);
}
