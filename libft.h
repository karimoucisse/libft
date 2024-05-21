/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:45:24 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/21 13:35:58 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
// test library => to delete
# include <ctype.h>
# include <string.h>

int		ft_isalnum(int i); // ok
int		ft_isalpha(int c); // ok
int		ft_isascii(int c); // ok
int		ft_isdigit(int i); // ok
int		ft_isprint(int c); // ok
int		ft_strlen(const char *str); // ok
int		ft_toupper(int c); // ok
int		ft_tolower(int c); // ok
char	*ft_strchr(const char *s, int c); // ok
char	*ft_strrchr(const char *s, int c); // ok
int		ft_strncmp(const char *s1, const char *s2, int n); //// no
char	*ft_strnstr(const char *big, const char *little, int len); //// no
int		ft_atoi(const char *str); //// no
int		ft_strlcpy(char *dst, const char *src, int size); //// no
int		ft_strlcat(char *dst, const char *src, int size);
char	*ft_strdup(const char *str); //// no
void	ft_bzero(void *s, int n);
void	*ft_memset(void *pointer, int value, int count);
void	*ft_memcpy(void *dst, const void *src, int size);
void	*ft_memchr(const void *memoryBlock, int searchedChar, int size);
int		ft_memcmp(const void *p1, const void *p2, int size);

#endif
