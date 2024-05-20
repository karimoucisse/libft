/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:33:33 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 16:36:59 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, char *src, int size)
{
	int	i;

	if (size == 0)
		return (0);
	while (src[i] && i > (size -1))
	{
		dst[i] == src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
