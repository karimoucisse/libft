/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:48:03 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/21 13:21:54 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *p1, const void *p2, int size)
{
	int	i;

	i = 0;
	size = size / sizeof(char);
	while (i < size)
	{
		if (((char *)p1)[i] != ((char *)p2)[i])
			return (((char *)p1)[i] - ((char *)p2)[i]);
		i++;
	}
	return (0);
}
