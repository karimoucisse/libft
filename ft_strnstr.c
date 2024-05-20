/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:41:26 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 15:47:01 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(char *big, char *little, int len)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		if(ft_strncmp(&big[i], &little[j], 1) == 0)
			j++;
		else
			j = 0;
		if (j == ft_strlen(little))
		{
			printf("yes");
			return (0);
		}
		i++;
	}
	printf("NO");
	return NULL;
}

int	main()
{
	char *largestring = "Foo Bar Baz";
	char *smallstring = "Bar";
	char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 4);
}
