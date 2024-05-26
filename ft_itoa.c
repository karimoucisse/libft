/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:07:46 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/26 17:14:52 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_len(int n, int *s)
{
	int	len;

	if (n == 2147483647)
		len = 10;
	else if (n == -2147483648)
	{
		len = 10;
		*s = 1;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			*s = 1;
		}
		len = 0;
		while (n > 0)
		{
			n /= 10;
			len++;
		}
	}
	return (len + *s);
}

char	*fill_tab(int len, long num, int sign)
{
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	str[len] = '\0';
	while ((len - 1) >= sign)
	{
		str[len -1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	long	copy;

	sign = 0;
	len = int_len(n, &sign);
	if (n == 0)
		len = 1;
	copy = n;
	if (copy < 0)
	{
		if (copy == -2147483648)
			copy = 2147483648;
		else
		copy = -copy;
	}
	if (!fill_tab(len, copy, sign))
		return (0);
	return (fill_tab(len, copy, sign));
}