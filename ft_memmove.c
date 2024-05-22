/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:47:51 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/22 13:01:08 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	char *copy;

	i = 0;
	copy = (char *)src;
	while(i < n)
	{
		((char *)dst)[i] = copy[i];
		i++;
	}
	return (dst);
}
