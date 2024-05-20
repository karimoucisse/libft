/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:45:24 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 15:42:16 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(int i);
int		ft_isalpha(int c);
int		isascii(int c);
int		ft_isdigit(int i);
int		ft_isprint(int c);
int		ft_strlen(char *str);
int		toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char *str, int searchedChar);
char	*ft_strrchr(char *str, int searchedChar);
int		ft_strncmp(char *first, char *second, int length);
char	*ft_strnstr(char *big, char *little, int len);
#endif
