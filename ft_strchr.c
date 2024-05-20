/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:27:06 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 14:27:07 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int	searchedChar)
{
	int		i;
	char	*c;

	i = 0;
	while (str[i])
	{
		if (str[i] == searchedChar)
		{
			return (str[i]);
		}
		i++;
	}
	return (0);
}
