/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <kcisse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:45:24 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/21 17:19:27 by kcisse           ###   ########.fr       */
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

int		ft_isalnum(int i); // OK
int		ft_isalpha(int c); // OK
int		ft_isascii(int c); // OK
int		ft_isdigit(int i); // OK
int		ft_isprint(int c); // OK
int		ft_strlen(const char *str); // OK
int		ft_toupper(int c); // OK
int		ft_tolower(int c); // OK
char	*ft_strchr(const char *s, int c); // NO
char	*ft_strrchr(const char *s, int c); // NO
int		ft_strncmp(const char *s1, const char *s2, int n); // OK
char	*ft_strnstr(const char *big, const char *little, int len); //// NO
int		ft_atoi(const char *str); //// NO
int		ft_strlcpy(char *dst, const char *src, int size); //// NO
int		ft_strlcat(char *dst, const char *src, int size); // NO
char	*ft_strdup(const char *str); // OK
void	ft_bzero(void *s, int n); // OK
void	*ft_memset(void *pointer, int value, int count); // OK
void	*ft_memcpy(void *dst, const void *src, int size); // OK
void	*ft_memchr(const void *memoryBlock, int searchedChar, int size); // NO
int		ft_memcmp(const void *p1, const void *p2, int size); // NO
void	*ft_memmove(void *dst, const void *src, int n); // NO

#endif
