/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:14:51 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/23 17:29:14 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	nbr_spliter(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == c)
			len++;
		i++;
	}
	return (len);
}

void ft_split_char(char const *s, char c, char **splited_char)
{

}

char **ft_split(char const *s, char c)
{
	int		len;
	char	**splited_char;

	len = nbr_spliter(s, c);
	splited_char = malloc(sizeof(char *) * (len + 1));
	printf("i = %d", len);
	return (char *)s;
}
int main()
{
	ft_split("qwe_reger__rtg_g", '_');
}
