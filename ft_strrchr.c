/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:27:13 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 15:16:02 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int searchedChar)
{
	int	len;

	len = ft_strlen(str);
	while (str[len])
	{
		if (str[len] == searchedChar)
		{
			return (&str[len]);
		}
		len--;
	}
	return (0);
}
