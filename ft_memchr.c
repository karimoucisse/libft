/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:35:09 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 18:35:39 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *memoryBlock, int searchedChar, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (((char *)memoryBlock)[i] == searchedChar)
			return (&((char *)memoryBlock)[i]);
		i++;
	}
	return (0);
}
