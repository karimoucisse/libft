/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:45:24 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/20 18:57:21 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(char i);
int		ft_isalpha(char c);
int		isascii(char c);
int		ft_isdigit(char i);
int		ft_isprint(char c);
int		ft_strlen(char *str);
int		toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char *str, int searchedChar);
char	*ft_strrchr(char *str, int searchedChar);
int		ft_strncmp(char *first, char *second, int length);
char	*ft_strnstr(char *big, char *little, int len);
int		ft_atoi(char *str);
int		ft_strlcpy(char *dst, char *src, int size);
int		ft_strlcat(char *dst, char *src, int size);
char	*ft_strdup(char *str);
void	ft_bzero(void *s, int n);
void	*ft_memset(void *pointer, int value, int count);
void	*ft_memcpy(void *dst, void *src, int size);
void	*ft_memchr(void *memoryBlock, int searchedChar, int size);
int	ft_memcmp(void * p1, void * p2, int size);

#endif
