/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:32:54 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 17:38:14 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *pointer, int value, int count)
{
	int	size;
	int	i;

	size = count / sizeof(char);
	i = 0;
	while (i < size)
	{
		((char *)pointer)[i] = value;
	}
	return (pointer);
}
