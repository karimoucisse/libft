/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:08:31 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 15:15:07 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *first, char *second, int length)
{
	int	i;

	i = 0;
	while ((first[i] || second[i]) && i < length)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}
